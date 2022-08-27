#include <iostream>
using namespace std;

int BinarySearch ( int arr[] , int size, int key ) {

    int start = 0;
    int end = size - 1;
    int mid;
    while ( start <= end ) {

        mid = (start + end) / 2;

        if (arr[mid] == key) {

            return mid; 
        }

        else if ( arr[mid] > key ) {

            end = mid - 1;
        }

        else if ( arr[mid] < key) {
            start = mid + 1;
        }
        
    }
    return -1;
   
}

int main () 
{
    int n , arr[100], key;
    cout << " Enter the Number  of Elements in the Array : ";
    cin >> n;
    
    cout << " Enter Array Elements : " ;

    for ( int i = 0; i < n; i++) {

        cin >> arr[i];
    } 

    cout << " Enter  the Element that is to be searched : ";
    cin >> key;

    cout << " Element Found at Index : " << BinarySearch(arr, n, key) << endl ;
    return 0;
}
