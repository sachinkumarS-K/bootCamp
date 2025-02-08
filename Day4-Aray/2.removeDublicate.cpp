#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

     int arr[] = {32, 40, 43, 60, 72, 78, 82, 82, 82, 99};
     int n = sizeof(arr) / sizeof(arr[0]);

     int c = 0;

     for (int i = 1; i < n; i++){
          if(arr[c] == arr[i]){
               swap(arr[c], arr[i]);
          }


     }

     for (int i = 0; i < c; i++)
          cout << arr[i] << "  ";

          return 0;
}