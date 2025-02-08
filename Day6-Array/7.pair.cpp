#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     vector<int> arr = {1, 5, 7, -1, 5, 3, 4, 2, 6};

     sort(arr.begin(), arr.end());
     for(auto i:arr)
          cout << i << " ";
     cout << endl;
     int s = 6;
     int l = 0, h = arr.size() - 1;

     while(l<h){
          if((arr[l] + arr[h]) == s){
               cout << "( " << arr[l] <<" "<< arr[h] << " )" << endl;
               l++;
               h--;
          }
          else if((arr[l] + arr[h]) < s){
               l++;
          }
          else{
               h--;
          }
     }

     return 0;
}