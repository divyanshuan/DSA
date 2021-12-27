/* DIVYANSHU VERMA 202081 */
/* c++ program that uses the stack operations to
convert a given infix expression into its postfix equivalent*/
#include <iostream>
#include <stack>
#define lim 25
using namespace std;
char astack[25];
int top = -1;
void push(char input)
{
    if (top == lim - 1)
    {
        cout << "stack is full ";
    }

    else
    {
        top++;
        astack[top] = input;
    }
}
char pop()
{
    char ch;
    if (top == -1)
    {
        cout << "stack is empty";
    }
    else
    {
        ch = astack[top];
        astack[top] = '\0';
        top--;
        return (ch);
    }
    return 0;
}
int precedence(char oprator)
{
    if (oprator == '+' || oprator == '-')
    {
        return (1);
    }

    if (oprator == '*' || oprator == '/')
    {
        return (2);
    }
    return 0;
}
string infixtopostfix(string infix)
{
    int i = 0;
    string postfix = "";
    while (infix[i] != '\0')
    {
        if (infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
        {
            postfix.insert(postfix.end(), infix[i]);
            i++;
        }
        else if (infix[i] == '(')
        {
            push(infix[i]);
            i++;
        }
        else if (infix[i] == ')')
        {

            while (astack[top] != '(')
            {
                postfix.insert(postfix.end(), pop());
            }
            pop();
            i++;
        }
        else
        {
            if (top == -1)
            {
                push(infix[i]);
                i++;
            }

            else if (precedence(infix[i]) <= precedence(astack[top]))
            {
                postfix.insert(postfix.end(), pop());

                while (precedence(astack[top]) == precedence(infix[i]))
                {
                    postfix.insert(postfix.end(), pop());
                    if (top < 0)
                    {
                        break;
                    }
                }
                push(infix[i]);
                i++;
            }
            else if (precedence(infix[i]) > precedence(astack[top]))
            {
                push(infix[i]);
                i++;
            }
        }
    }
    while (top != -1)
    {
        postfix.insert(postfix.end(), pop());
    }
    cout << "POSTFIX EQUIVALENT OF THE EXPRESSION IS : " << postfix;
    return postfix;
}
int main()
{
    string infix, postfix;
    cout << "\nENTER THE INFIX EXPRESSION : \n";
    cin >> infix;
    postfix = infixtopostfix(infix);
    return 0;
}
