#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int> arr = {7,1,5,3,6,4};
     int maxProfit = 0;
     int x = arr[0];
     for (int i = 1; i < arr.size(); i++){
          if(arr[i] < x){
               x = arr[i];
          }
          else if(maxProfit < arr[i]-x){
               maxProfit = arr[i] - x;
          }
     }

     cout << maxProfit;
     return 0;
}