/*swapping of two numbers using call by value */
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int k;
    k=a;
    a=b;
    b=k;
    cout<<"AFTER SWAPPING "<<endl;
    cout<<"the first number = "<<a<<endl;
    cout<<"the  second number = "<<b<<endl;
}
int main()
{
    int num1, num2;
    cout<<"Enter Numbers To swap"<<endl;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    cout<<"BEFORE SWAPPING "<<endl;
    cout<<"the first number = "<<num1<<endl;
    cout<<"the  second number = "<<num2<<endl;
    swap(num1,num2);
    return 0;
}