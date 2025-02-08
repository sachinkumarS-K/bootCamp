#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &num)
{
        int n = num.size();


        vector<int> arr(n+1 , 0);
        // cout << arr.size();
        for (int i = 0; i <n; i++)
        {
                cout << arr[num[i]];
                arr[num[i]]++;
        }
        for (int i = 0; i < arr.size(); i++)
        {
                if (arr[i] == 0)
                        return i;
        }
}

int main(){

        vector<int> arr = {0, 1};

        cout << missingNumber(arr);

        return 0;
}