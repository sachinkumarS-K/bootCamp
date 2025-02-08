#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int> arr = {1, 12, -5, -6, 50, 3};
     int k = 4;

     int maxSum = 0;
     for (int i = 0; i <= arr.size() - k + 1; i++)
     {
          int s = 0;
          for (int j = i; j < k + i; j++)
          {
               s += arr[j];
          }
          maxSum = max(maxSum, s);
        }
        cout << maxSum/k;

        return 0;
}