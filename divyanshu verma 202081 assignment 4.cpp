#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int k = *a;
    *a = *b;
    *b = k;
}
int partiation(int ary[], int first, int last)
{
    int pivot = ary[last];
    int i = (first - 1);
    for (int j = first; j <= last - 1; j++)
    {

        if (ary[j] <= pivot)
        {
            i++;
            swap(&ary[i], &ary[j]);
        }
    }
    swap(&ary[i + 1], &ary[last]);
    return (i + 1);
}

void quickshort(int arr[], int l, int r)
{

    if (l < r)
    {
        int pi = partiation(arr, l, r);
        quickshort(arr, l, pi - 1);
        quickshort(arr, pi + 1, r);
    }
}
int main()
{
    int n;
    cout << "Enter the size of the arry" << endl;
    cin >> n;
    int arry[n];
    cout << "Enter the elements of arry" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    cout << "Before shorting " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << "\t";
    }
    quickshort(arry, 0, n - 1);
    cout << "\nAfter shorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << "\t";
    }
}