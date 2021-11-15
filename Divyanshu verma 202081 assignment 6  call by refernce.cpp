/*swapping of two numbers using call by refernce */
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int k;
    k=*a;
    *a=*b;
    *b=k;
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
    swap(&num1,&num2);
    cout<<"AFTER SWAPPING "<<endl;
    cout<<"the first number = "<<num1<<endl;
    cout<<"the  second number = "<<num2<<endl;
    return 0;
}