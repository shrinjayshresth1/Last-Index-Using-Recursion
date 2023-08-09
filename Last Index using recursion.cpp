#include<iostream>
using namespace std;

int last_Index(int arr[], int x, int size) {
    // Base Case
    if (size == 0) {
        return -1;
    }
    // Recursive call
    int answer = last_Index(arr + 1, x, size - 1);
    return answer + 1;
}

int main() {
    int arr[5] = {1, 2, 4, 5, 2};
    int size = 5;
    int x = 4;
    cout << last_Index(arr, x, size) << endl;
    return 0;
}

