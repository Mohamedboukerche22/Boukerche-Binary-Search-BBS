// Boukerche Binary Search (BBS)
// Created by Mohamed Boukerche
#include <bits/stdc++.h>
using namespace std;

int BBS(const vector<int>& nums, int target) 
{
    int n = nums.size();

    vector<pair<int, int>> indexedNums;
  
    for (int i = 0; i < n; ++i) 
    {
        indexedNums.emplace_back(nums[i], i);
    }

    sort(indexedNums.begin(), indexedNums.end());


    int L = 0, R = n - 1;
    while (L <= R) 
    {
        int M = (L + R) / 2;
      
        if (indexedNums[M].first == target) 
        {
            return indexedNums[M].second; 
        } 
        else if (indexedNums[M].first < target) 
        {
            L = M + 1;
        } 
        else 
        {
            R = M - 1;
        }
    }

    return -1;
}

int main() 
{
    int n, target;
  
    cin >> n;
  
    vector<int> nums(n);

    for (int i = 0; i < n; ++i) 
    {
        cin >> nums[i];
    }

    cin >> target;

    int result = BBS(nums, target);

    if (result != -1) {
        cout << result << "\n";
    } else {
        cout << "not found\n";
    }

    return 0;
}
