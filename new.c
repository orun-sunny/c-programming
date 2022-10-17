
#include <iostream>
using namespace std;

double average(int a[], int n)

    int sum = 0;
    for (int i=0; i<n; i++)
       sum += a[i];

    return (double)sum/n;
}


int main()
{
    int arr[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << average(arr, n) << endl;
    return 0;
}
