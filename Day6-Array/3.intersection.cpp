#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1, 5, 10, 20, 40, 80};
    vector<int> brr = {6, 7, 20, 80, 100};

     int i = 0, j = 0;
     while(i<arr.size() && j<brr.size()){
       if (arr[i] == brr[j])
       {
         cout << arr[i] << " ";
         i++;
         j++;
      }
      else if(arr[i] > brr[j])
        j++;
      else
        i++;
     }

     return 0;
}