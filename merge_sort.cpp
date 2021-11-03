#pragma once
#include <iostream>
#include <vector>
using namespace std;

void mergeSortFunc(vector<unsigned int> &arr, vector<unsigned int> &temp, unsigned int leftStart, unsigned int rightEnd)
{
    if (leftStart >= rightEnd)
    {
        return;
    }
    unsigned int mid;
    mid = (leftStart + rightEnd) / 2;
    mergeSortFunc(arr, temp, leftStart, mid);
    mergeSortFunc(arr, temp, mid + 1, rightEnd);
    merge(arr, temp, leftStart, rightEnd);
}

void merge(vector<unsigned int> &arr, vector<unsigned int> &temp, int leftStart, int rightEnd)
{
    unsigned int leftEnd = (leftStart + rightEnd) / 2 unsigned int rightStart = leftEnd + 1;
    unsigned int left = leftStart, right = rightStart;
    while (left <= leftEnd && right <= rightEnd)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= leftEnd)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= rightEnd)
    {
        temp.push_back(arr[right]);
        right++;
    }
    // copy temp to initial arr
    arr.clear();
    for (unsigned int x : temp)
    {
    }
}