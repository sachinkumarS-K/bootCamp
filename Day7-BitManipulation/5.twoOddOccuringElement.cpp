
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int>arr = {1, 2, 1, 2, 3,3, 4, 8,8,1, 9, 1, 9, 1};

     int ans = 0;
     for (int i = 0; i < arr.size(); i++)
          ans = ans ^ arr[i];

     int t = ans, k = 0;
     while(1){
          if(t & 1)
               break;
          k++;
          t = t >> 1;
     }
     t = 0;
     for (int i = 0; i < arr.size(); i++){
          if((arr[i] >> k) &1)
               t ^= arr[i];
     }
     cout <<"The two odd Numbers arr  "<<t << " "<<(ans^t);

     return 0;
}