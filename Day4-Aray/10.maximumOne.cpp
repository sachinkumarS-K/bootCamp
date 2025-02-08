#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

     vector<int> arr = {1, 0, 0, 1, 0, 1, 0, 1};
     int k = 2;
     int maxLen = 0, l = 0, r = 0 , z = 0;
     while(r < arr.size()){
          if(arr[r] == 0)
               z++;

          if(z <=k){
               int len = r - l + 1;
               maxLen = max(len, maxLen);
          }

          while(z > k){
               if(arr[l] == 0)
                    z--;
               l++;
          }
          r++;
     }

     cout << maxLen;
     // int maxLen = 0;
     // for (int i = 0; i < arr.size(); i++){
     //      int z = 0,len;
     //      for (int j = i; j < arr.size(); j++){
     //           if(arr[j] == 0)
     //                z++;
     //           if(z <= k){
     //                len = j - i + 1;
     //                maxLen = max(maxLen, len);
     //           }
     //           else
     //                break;
     //      }
     // }
     // cout << maxLen;

     // int len = 0;


     return 0;
}