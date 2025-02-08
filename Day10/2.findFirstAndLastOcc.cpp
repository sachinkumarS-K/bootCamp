#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &arr, int t)
{
        vector<int> ans;
        if (arr.size() == 0)
        {
                ans.push_back(-1);
                ans.push_back(-1);
                return ans;
        }
        int l = 0, h = arr.size() - 1;
        while (l < h)
        {
                int m = l + (h - l) / 2;
                if (arr[m] > t)
                        h = m - 1;
                else if (arr[m] < t)
                        l = m + 1;
                else
                {
                        // if (m == 0)
                        if(m == 0 ||  arr[m] != arr[m+1])
                                ans.push_back(m);
                        else if(m == arr.size()-1 || arr[m] != arr[m-1])
                                ans.push_back(arr[m - 1]);
                         break;
                }
        }

        return ans;
}

int main(){
        vector<int> b = {5, 7, 7, 8, 8, 10};

        vector<int> ans = searchRange(b, 8);
        for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << "  ";

                return 0;
}