#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

     vector<int> arr = {4, 1, 2, 1, 2};

     int n = arr[0];
     for (int i = 1; i < arr.size(); i++){
          n = n ^ arr[i];
     }
     cout << n;

     return 0;
}