#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     vector<int> arr = {0, 1, 1,1,1, 0, 1, 1, 1,1,1};
     int l = 0, h = arr.size() - 1;
     int maxLen = 0 , c=0;
     while(l<=h){

          if(arr[l] == 0){
               c = 0;
          }
          else{
               c++;
               maxLen = max(c, maxLen);
          }
          l++;
     }
     cout << maxLen;

     return 0;
}