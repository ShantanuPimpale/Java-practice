#include<iostream>
using namespace std;

void Merge(int low, int mid, int high, int A[]) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1], R[n2];
    
    for (int i = 0; i < n1; i++) {
        L[i] = A[low + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = A[mid + 1 + j];
    }
    
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int low, int high, int A[]) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        MergeSort(low, mid, A);
        MergeSort(mid + 1, high, A);
        Merge(low, mid, high, A);
    }
}

int main() {
    int n;
    cout << "Enter No of elements:";
    cin >> n;
    int A[n];
    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    cout << "Entered Array is:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << "\t";
    }
    
    MergeSort(0, n - 1, A);
    cout << "\nMerge Sorted Array is:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << "\t";
    }
    
    return 0;
}
