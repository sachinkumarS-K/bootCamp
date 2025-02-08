#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     vector<int> arr = {3, 0, 1, 0, 4, 0 ,2};
     int lrr[arr.size()];
     int rrr[arr.size()];
     lrr[0] = arr[0];
     rrr[arr.size() - 1] = arr[arr.size() - 1];

     for (int i = 1; i < arr.size(); i++){
          lrr[i] = max(lrr[i - 1], arr[i]);
     }

     for (int i = arr.size() - 2; i >= 0; i--){

          rrr[i] = max(rrr[i + 1], arr[i]);
     }
     int s = 0;

     for (int i = 0; i < arr.size(); i++){
          s+= min(lrr[i], rrr[i]) - arr[i];

     }
     cout << s;


     return 0;
}