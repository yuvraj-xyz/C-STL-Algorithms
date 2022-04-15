#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


// COMPARATORS

// 1
// bool comp(int el1, int el2)
// {
//     if(el1>=el2)
//     {
//         return true;
//     }
//     return false;
// }

// int main()
// {
    
//     int arr[10] = {5,2,1,10,4,9,3,6,8,7};

//     sort(arr, arr+10, comp);

//     for(int i=0; i<10; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// 2
// bool comp(pair<int,int> el1, pair<int,int> el2)
// {
//     if(el1.first < el1.second)
//     {
//         return true;
//     }
//     if(el1.first == el2.first)
//     {
//         if(el1.second > el2.second)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     pair<int,int> arr[] = {{4,1},{2,5},{2,9}};

//     for(int i=0; i<3; i++)
//     {
//         cout << arr[arr->first, arr->second ] << " ";
//     }
//     cout << endl;

// }



// Array
int main()
{
    int n = 5;
    int arr[n] = {10,9,3,4,1};

    // sorting
    sort(arr, arr+n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // reverse
    reverse(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Descending Order With greater<int>
    // sort(arr, arr+n, greater<int>);
    // for(int i=0; i<n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // Minimum/Maximum element
    int element_min = *min_element(arr, arr+n);
    cout << element_min << endl;

    int element_max = *max_element(arr, arr+n);
    cout << element_max << endl;

    // Sum of a Range of Elements
    int sum = accumulate(arr, arr+n, 0);
    cout << sum << endl;

    // COUNTS "Repeatation" of an Element
    int cnt = count(arr, arr+n, 9);
    cout << cnt << endl;

    // "First OCCURRENCE" of an Element
    auto it = find(arr, arr+n, 4);    // Find Index of 4
    int index = it - arr;         // iterator it point on the location of the 4, so we have to find index by subtracting
    cout << index << endl;

    // Binary Search --True/False --(Only Works in Sorted Arrays/Vector)

    // First Sort The Unsorted Array/Vector
    sort(arr, arr+n);

    bool result = binary_search(arr, arr+n, 9);
    if(result==1)    // Because It Returns 1/0 1==True and 0==False
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    // Lower Bound
    auto it2 = lower_bound(arr, arr+n, 5);
    cout << *it2 << endl;    // "9" is the only element which is not less than 5

    // Upper Bound
    auto it3 = upper_bound(arr, arr+n, 5);
    cout << *it3 << endl;    // "9" is the only element which is Just Greater Than 5

    // NEXT Permutaion
    bool res = next_permutation(arr, arr+n);
    cout << res << endl;

    // PREVIOUS Permutation
    bool res2 = next_permutation(arr, arr+n);
    cout << res2 << endl;
}



// Vector
// int main ()
// {
//     // Sort
//     vector <int> vec = {222, 33, 333, 44, 555};

//     sort(vec.begin(), vec.end());     // Sorts in Asscending Order
//     for(auto it: vec)
//     {
//         cout << it << " ";
//     }
//     cout << endl;

//     // sort(vec.begin()+1, vec.begin()+4);   // sort a given range
//     // for(auto it: vec)
//     // {
//     //     cout << it << " ";
//     // }
//     // cout << endl; 

//     // Reverse
//     reverse(vec.begin(), vec.end());   // Reverse in Descending Order (Because already sorted the vector above)
//     for(auto it: vec)
//     {
//         cout << it << " ";
//     }
//     cout << endl;

//     sort(vec.begin()+1, vec.begin()+4);   // sort a given range
//     for(auto it: vec)
//     {
//         cout << it << " ";
//     }
//     cout << endl; 

//     // Minimum/Maximum element
//     int element_min = *min_element(vec.begin(), vec.end());
//     cout << element_min << endl;

//     int element_max = *max_element(vec.begin(), vec.end());
//     cout << element_max << endl;

//     // Sum of Range of Elements
//     int sum = accumulate(vec.begin(), vec.begin()+2, 0);
//     cout << sum << endl;

//     // COUNTS Repeatation of an Element
//     int cnt = count(vec.begin(), vec.end(), 333);
//     cout << cnt << endl;

//     // First OCCURRENCE of an Element
//     auto it = find(vec.begin(), vec.end(), 555);    // Find Index of 555
//     int index = it - vec.begin();         // iterator it point on the location of the 555, so we have to find index by subtracting
//     cout << index << endl;

//     // Binary Search --(1/0)True/False --(Only Works in Sorted Arrays/Vector)
    
//     // First Sort The Unsorted Array/Vector
//     sort(vec.begin(), vec.end());

//     bool result = binary_search(vec.begin(), vec.end(), 555);
//     if(result==1)    // Because It Returns 1/0 1==True and 0==False
//     {
//         cout << "True" << endl;
//     }
//     else
//     {
//         cout << "False" << endl;
//     }

//     // Lower Bound
//     auto it2 = lower_bound(vec.begin(), vec.end(), 500);
//     cout << *it2 << endl;    // "555" is the only element which is not less than 500

//     // Lower Bound
//     auto it3 = lower_bound(vec.begin(), vec.end(), 500);
//     cout << *it3 << endl;    // "555" is the only element just greater than 500

//     // NEXT Permutaion
//     bool res = next_permutation(vec.begin(), vec.end());
//     cout << res << endl;

//     // PREVIOUS Permutation
//     bool res2 = next_permutation(vec.begin(), vec.end());
//     cout << res2 << endl;
// }
