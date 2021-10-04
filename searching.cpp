#pragma once
#include <bits/stdc++.h>
using namespace std;

int linear_search(vector<int> vect, int a)
{
    // for (int x : vect)
    // {
    //     if (x == a)
    //     {
    //         return 1;
    //     }
    // }
    if (a < 0)
    {
        return -1;
    }
    for (int i = 0; i < vect.size(); i++)
    {
        if (vect[i] == a)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(vector<int> vect, int a)
{
    int low = 0;
    int high = vect.size();
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (vect[mid] < a)
        {
            low = mid + 1;
        }
        else if (vect[mid] > a)
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
