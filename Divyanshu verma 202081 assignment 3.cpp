#include <iostream>
using namespace std;
void add()
{

    int n;
    cout << "enter the size of square matrix" << endl;
    cin >> n;
    int arr[n][n], ary1[n][n], ary2[n][n];

    cout << "enter the element of first matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter element of row  " << i + 1 << "and column " << j + 1 << "of the arry 1  " << endl;
            cin >> ary1[i][j];
        }
    }
    cout << "enter the element of second matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter element of row  " << i + 1 << "and column " << j + 1 << "of the arry 2  " << endl;
            cin >> ary2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = ary1[i][j] + ary2[i][j];
        }
    }

    cout << "result of addition of the matrix are " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<"  ";
           
        }
        cout << "" << endl;
    }
}
void sub()
{
    int n;
    cout << "enter the size of square matrix" << endl;
    cin >> n;
    int arr[n][n], ary1[n][n], ary2[n][n];

    cout << "enter the element of first matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter element of row " << i + 1 << " and column " << j + 1 << " of the matrix  " << endl;
            cin >> ary1[i][j];
        }
    }
    cout << "\n enter the element of second matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter element of row " << i + 1 << " and column " << j + 1 << " of the matrix  " << endl;
            cin >> ary2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = ary1[i][j] - ary2[i][j];
        }
    }

    cout << "result of subtraction  of the matrix are " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<"  ";
            
        }
        cout << "" << endl;
    }
}
void mult()
{
    int n;
    cout << "enter the size of square matrix" << endl;
    cin >> n;
    int arr[n][n], ary1[n][n], ary2[n][n];

    cout << "enter the element of first matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter element of row " << i + 1 << " and column " << j + 1 << " of the matrix  " << endl;
            cin >> ary1[i][j];
        }
    }
    cout << "\n enter the element of second matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter element of row " << i + 1 << " and column " << j + 1 << " of the matrix  " << endl;
            cin >> ary2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            arr[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                arr[i][j] = arr[i][j] + (ary1[i][k] * ary2[k][j]);
            }
        }
    }

    cout << "result of multiplication  of the matrix are " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << arr[i][j] << "  ";
        }
        cout << "" << endl;
    }
}
void transpose()
{
    int n;
    cout << "enter the size of square matrix" << endl;
    cin >> n;
    int arr[n][n], ary1[n][n];

    cout << "enter the element of first matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter element of row " << i + 1 << " and column " << j + 1 << " of the matrix  " << endl;
            cin >> ary1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = ary1[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << "" << endl;
    }
}

int main()
{
    int option;
    cout << "Choose what to do with matrix " << endl;
    cout << "1. Addition of matrix\n"
         << "2. Subtraction  of matrix\n"
         << "3. Multiplication of matrix\n"
         << "4. Traspose of matrix\n"
         << endl;

    cin >> option;
    switch (option)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mult();
        break;
    case 4:
        transpose();
        break;
    default:
        cout << "nothing is selected" << endl;
    }

    return 0;
}
