#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int> arr = {1, 2, 3};
     int k = 3;
     int c = 0 , l = 0 , h = 0;
     int x = 0;
     while(h<arr.size()){
          c += arr[h];
          // cout << c;
          while(c > k){
               c -= arr[l++];
          }
          if(c == k){
               x++;
               c = 0;
               l = h;

          }
          h++;
     }
     cout << x;

     return 0;
}