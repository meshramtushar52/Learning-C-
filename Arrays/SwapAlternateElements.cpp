#include <bits/stdc++.h>
using namespace std;

void AlternateReverse(int arr[], int size) {

  int a = 0;
  int b = 1;
  while (a + 1 < size) {
    swap(arr[a], arr[b]);

    a += 2;
    b += 2;
  }
}

void printArray(int array[], int size) {

  for (int i = 0; i < size; i++) {

    cout << array[i] << " ";
  }
}

int main() {

  int size;
  cout << "Enter Size : ";
  cin >> size;

  int arr[100];
  cout << "Enter Elements : ";
  for (int i = 0; i < size; i++) {

    cin >> arr[i];
  }

  AlternateReverse(arr, size);

  cout << " Alternate Reversed Array is : ";
  printArray(arr, size);

  return 0;
}