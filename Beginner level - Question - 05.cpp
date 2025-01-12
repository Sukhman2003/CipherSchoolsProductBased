
// Question 1 -->Given an array arr[] of n integers where arr[i] represents the number of chocolates in ith packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:

//Each student gets exactly one packet.
//The difference between the maximum and minimum number of chocolates in the packets given to the students is minimized.


#include <iostream>
using namespace std;
int minimized(int arr[], int size, int m) {
    int re = 2147483647;
    for (int i = 0; i <= size - m; i++) {
        int min = arr[i];
        int max = arr[i];

        for (int j = i; j < i + m; j++) {
            if (arr[j] < min) {
                min = arr[j];
            }
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        int temp = max - min;
        if (temp < re) {
            re = temp;
        }
    }

    return re;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int m;
    cout << "Enter number of students: ";
    cin >> m;

    int result = minimized(arr, size, m);
        cout << "Minimum difference is: " << result << endl;

    return 0;
}
