#pragma once
#include<iostream>
#include <vector>
#include "swap.cpp"
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot;
    pivot = arr[high];
    int i = low - 1;
    for (int j = i + 1; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick_sort(vector<int> &arr, int low, int high)
{
    if (low <= high)
    {
        int pivot;
        pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
    }
}