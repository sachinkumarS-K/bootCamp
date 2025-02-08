#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int> arr = {1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10};

     int f = 1;
     for (int i = 1; i < arr.size(); i++){
          if(arr[i] == arr[i-1]){
               f++;
          }
          else{
               cout << "The freequency of " << arr[i - 1] << " is  " << f<<endl;
               f = 1;
          }
     }

          return 0;
}