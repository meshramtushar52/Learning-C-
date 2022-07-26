#include <bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int size) {

  int start = 0;
  int end = size - 1;
  while (start <= end) {
    swap(arr[start], arr[end]);

    start++;
    end--;
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

  int arr[10];
  cout << "Enter Elements : ";
  for (int i = 0; i < size; i++) {

    cin >> arr[i];
  }

  Reverse(arr, size);

  cout << "Reversed Array is : ";
  printArray(arr, size);

  return 0;
}