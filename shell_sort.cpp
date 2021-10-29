#include <iostream>
#include <vector>
using namespace std;

void ShellSort(vector<int> &arr)
{
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            // this following loop is for move current element to right place in left direction with step equals to gap
            for (int j = i; j >= gap && arr[j - gap] > arr[j]; j -= gap)
            {
                swap(arr[j], arr[j-gap]);
            }
        }
    }
}