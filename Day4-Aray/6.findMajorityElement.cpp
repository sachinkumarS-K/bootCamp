#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int> arr = {2,2,1,1,1,2,2};

     // for (int i = 0; i < arr.size(); i++){
     //      int c = 1;
     //      for (int j = i + 1; j < arr.size(); j++){
     //           if(arr[j] == arr[i])
     //                c++;
     //      }
     //      cout << arr[i] << "  " << c << endl;
     //      if(c > arr.size()/2){
     //           cout << "Majority element =  " << arr[i];
     //           break;
     //      }

     //}

     int c = 1 , res=0;
     for (int i = 1; i < arr.size(); i++){
          if(arr[res] == arr[i])
               c++;
          else
               c--;
          if(c == 0){
               res = i;
               c = 1;
          }
     }
     cout << arr[res];

     return 0;
}