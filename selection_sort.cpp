#pragma once
#include <bits/stdc++.h>
#include "swap.cpp"
using namespace std;

void selectionSort(vector<int> &vect)
{
    int i, j, min_idx;
    int n = vect.size();
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (vect[j] < vect[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(&vect[min_idx], &vect[i]);
    }
}
