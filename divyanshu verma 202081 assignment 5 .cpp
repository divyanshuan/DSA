#include <iostream>
#include <string>
using namespace std;
void strlen()
{
    string str;
    cout << "To find length enter the string" << endl;
    cin.ignore();
    getline(cin, str);
    cout << str.length() << endl;
}
void strconc()
{
    string str, str1;
    cout << "For concatenate two string " << endl;
    cout << "Enter the first string" << endl;
    cin.ignore();
    getline(cin, str);
    cout << "Enter the second string" << endl;
    getline(cin, str1);
    str1 = str + str1;
    cout << "After concatenating " << endl;
    cout << str1 << endl;
}
void strre()
{
    string str;
    cout << "For  reverse of the string " << endl;
    cout << "enter the string " << endl;
    cin.ignore();
    getline(cin, str);
    cout << "printing reverse of string" << endl;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}
void strcp()
{
    string str, str1;
    cout << "For copy first string to second  string " << endl;
    cout << "Enter the first string" << endl;
    cin.ignore();
    getline(cin, str);
    str1 = str;
    cout << "first string =" << str << endl;
    cout << "second string =" << str1 << endl;
}
int main()
{
    int option;
    cout << "Enter the operation you want to do with string" << endl;
    cout << "1. Finding length of string " << endl;
    cout << "2. Concatenate two strings " << endl;
    cout << "3. Revrse of a string " << endl;
    cout << "4. Copy a string " << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        strlen();
        break;
    case 2:
        strconc();
        break;

    case 3:
        strre();
        break;
    case 4:
        strcp();
        break;
    default:
        cout << "NONE OF THE ABOVE CHOOSEN PLEASE SELECT ONE " << endl;
    }

    return 0;
}
