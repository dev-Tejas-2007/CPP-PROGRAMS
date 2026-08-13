#include <iostream>
using namespace std;

int binarySearch(int array[], int low, int high, int key)
{ 
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == key)
            return mid;
        else if (array[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        cout << "Key found at index " << result << "\n";
    else
        cout << "Key not found\n";

    delete[] arr;
    return 0;
}
