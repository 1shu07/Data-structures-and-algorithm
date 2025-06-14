 #include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
    int start = 0;
    int end = n - 1;

while (start <= end) {
int mid = start + (end - start) / 2; 
        if (a[mid] == key) {
            return mid; 
        }
        else if (a[mid] < key) {
            start = mid + 1;         }
        else {
            end = mid - 1; 
        }
    }

    return -1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int key = 5;
    int n = sizeof(a) / sizeof(a[0]);

    int index = binarySearch(a, n, key);
 
    if (index != -1) {
        cout << "Found at index: " << index;
    } 
else {
       cout << "Not found!";
    }

    return 0;
}
