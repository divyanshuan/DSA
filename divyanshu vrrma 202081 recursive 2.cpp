#include <iostream>
using namespace std;
int binarysearch(int ar[], int left, int right, int num)
{
    int mid;

    if (left <= right)
    {
        mid = (left + right) / 2;
        if (ar[mid] == num)
        {
            return mid;
        }
        if (ar[mid] > num)
        {
            return binarysearch(ar, left, mid - 1, num);
        }
        if (ar[mid] < num)
        {
            return binarysearch(ar, mid + 1, right, num);
        }
    }

    return -1;
}

int main()
{
    int n, number, result;
    cout << "enter the size of arry" << endl;
    cin >> n;
    int arry[n];
    cout << "Enter the elements of the arry in acending order" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    cout << "Enter the element to search" << endl;
    cin >> number;
    result = binarysearch(arry, 0, n, number);
    if (result == -1)
    {
        cout << "Element not found " << endl;
    }
    else
    {
        cout << "Element found at " << result << "  position of the arry" << endl;
    }
    return 0;
}