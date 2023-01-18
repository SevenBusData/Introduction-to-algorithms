#include <iostream>
using namespace std;

void Disp(int a[], int len)
{
    for(int i = 0; i < len; i++ )
        cout << a[i] << " ";
    cout << endl;
}
//    插入排序
void insertionSort(int a[], int len)
{
    int i, j, data;
    for ( i = 1; i < len; i++)
    {
        data = a[i];
        j = i - 1;
        while ( j >= 0 && a[j] > data)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = data;
    }
    Disp(a, len);
}

int main()
{
    int a[] = {9, 7, 8, 4, 6, 2};
    int n = 6;
    insertionSort(a, n);
    Disp(a, n);
    return 0;
}