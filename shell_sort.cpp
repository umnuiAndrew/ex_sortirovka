#pragma once

#include <iostream>
#include "swap.cpp"
using namespace std;

void shellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap -= 1)
    {
        for (int i=gap; i<n; i++)
        {
            if (arr[i] < arr[i-gap])
            {
                swap(arr[i], arr[i-gap]);
            }
        }
    }
}
 
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}
 
int main()
{
    int arr[] = {7, 6, 8, 9, 3, 2, 10, 5, 1}, i;
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout << "Array before sorting: \n";
    printArray(arr, n);
 
    shellSort(arr, n);
 
    cout << "\nArray after sorting: \n";
    printArray(arr, n);
 
    return 0;
}