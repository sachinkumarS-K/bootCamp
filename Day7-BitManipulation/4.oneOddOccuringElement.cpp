#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     vector<int> arr = {1, 2, 1, 2, 3, 4, 4, 5, 5};
     int res = 0;
     for (int i = 0; i < arr.size(); i++)
          res ^= arr[i];

     cout << res;

     return 0;
}