
#include <stdio.h>
#include<limits.h>

// Function for converting the array
void find(int n, int k, int arr[])
{
  // Find the maximum element in array
  int max = INT_MIN;
  for (int i = 0; i < n; i++) {

    if (arr[i] > max) {
      max = arr[i];
    }
  }

  // If k is odd
  if (k % 2 != 0) {
    for (int i = 0; i < n; i++) {
      printf("%d ", max - arr[i]);
    }
  }
  // If k is even
  else {

    // Subtract the max from every
    // element of array and store
    // the next maximum element in max1
    int max1 = INT_MIN;
    for (int i = 0; i < n; i++) {
      arr[i] = max - arr[i];
      if (arr[i] > max1) {
        max1 = arr[i];
      }
    }

    // Print the output
    for (int i = 0; i < n; i++) {
      printf("%d ", max1 - arr[i]);
    }
  }
}

// Driver code
void main()
{
  int N = 6, K = 3;
  int arr[] = { 5, 38, 4, 96, 103, 41 };

  // Function call
  find(N, K, arr);
}
