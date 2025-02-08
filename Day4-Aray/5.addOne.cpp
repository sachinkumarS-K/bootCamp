#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
      vector<int> arr =  {9,9};
     int l = arr.size();


     for (int i = l - 1; i >= 0; i--){
          if(arr[i] < 9){
               ++arr[i];
               break;
          }
          arr[i] = 0;

     }
     arr.insert(arr.begin(), 1);

     for (int i = 0; i < arr.size(); i++)
          cout << arr[i] << " ";

     return 0;
}