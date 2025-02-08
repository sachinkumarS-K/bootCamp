#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int minDiff(vector<int> &arr ,int m){
     if(m > arr.size())
          return -1;
     // int n = arr.size();
     sort(arr.begin(),arr.end());

     int res = arr[m - 1] - arr[0];
     // for (int i = 1; (i + m - 1) < arr.size(); i++){
     //      res = min(res, arr[i + m - 1] - arr[i]);
     // }

     for (int i = 1 ; i <= arr.size() - m ; i++){
          res = min(res, arr[i + m - 1] - arr[i]);
     }

          return res;
}

int main(){

     vector<int> arr = {3, 4, 1, 9, 56, 7, 9, 12};

     int x = minDiff(arr , 5);

     cout << x;

     return 0;
}