#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int trapRain(vector<int> &arr){
     int n = arr.size() , s = 0;
     vector<int> l(n), r(n);
     l[0] = arr[0];
     r[n - 1] = arr[n - 1];

     for (int i = 1; i < n; i++){
          l[i] = max(arr[i - 1], l[i - 1]);
          //cout << l[i] << "  ";
     }

     for (int i = n - 2; i >= 0; i--){
          r[i] = max(arr[i + 1], r[i + 1]);
          //cout << r[i] << "  ";
     }
     int t = -1;
     for (int i = 0; i < n; i++){
          t = min(r[i], l[i]) - arr[i];
          if(t>0)
               s += t;
          //cout << min(r[i], l[i]) - arr[i] << "  ";
     }
     return s;
}

int main(){
     vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
     int r = trapRain(arr);
     cout << "Total rain trapped is  " << r;
     return 0;
}