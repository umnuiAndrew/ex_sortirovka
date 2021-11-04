//Написать функцию лин. (01) и бин поиска (02) . Засечь время работы. Проверить на 1000, 2500, 5000, 10000 элементов.
#include <bits/stdc++.h>
#include "generator.cpp"
#include "selection_sort.cpp"
//#include "running_time.cpp"
#include "searching.cpp"
#include "quick_sort.cpp"
#include "shell_sort.cpp"
#include "merge_sort.cpp"
using namespace std;
using namespace std::chrono;

int main()
{
    // running_time_sorting(selectionSort);
    // running_time_sorting2(quick_sort, 1000);
    // running_time_sorting2(quick_sort, 2500);
    // running_time_sorting2(quick_sort, 5000);
    // running_time_sorting2(quick_sort, 10000);
    // running_time_searching(linear_search, 1000);
    // running_time_searching(binary_search, 1000);
    // running_time_searching(linear_search, 2500);
    // running_time_searching(binary_search, 2500);
    // running_time_searching(linear_search, 5000);
    // running_time_searching(binary_search, 5000);
    // running_time_searching(linear_search, 10000);
    // running_time_searching(binary_search, 10000);

    vector<int> arr;
    arr.push_back(17);
    arr.push_back(9);
    arr.push_back(11);
    arr.push_back(7);
    arr.push_back(15);
    arr.push_back(8);
    print_vector(arr);
    sort(arr);
    cout << endl
         << "after" << endl;
    print_vector(arr);
    return 0;
}