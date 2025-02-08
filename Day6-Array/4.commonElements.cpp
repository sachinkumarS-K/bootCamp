#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     vector<int> arr = {1, 5, 10, 20, 40, 80};
     vector<int> brr = {6, 7, 20, 80, 100};
     vector<int> crr = {3, 4, 15, 20, 30, 70, 80, 120};

     int i = 0, j = 0, k = 0;
     int ans[10] ;
     int c = 0;
     while (i < arr.size() && j < brr.size() && k < crr.size())
     {
         // cout << i << j << k << "  ";
          if (arr[i] == brr[j] && brr[j] == crr[k])
          {
               cout << arr[i] <<" ";
               i++;
               j++;
               k++;
          }
          else if (arr[i] < brr[j] && arr[i] < crr[k])
          {
               i++;
          }
          else if (brr[j] < crr[k])
               j++;
          else
              k++;
        }

     //    for (int i = 0; i < c; i++)
     //         cout << ans[i] << " ";

        return 0;
}