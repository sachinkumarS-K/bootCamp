#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void sortColor(vector <int> &arr){

     int l = 0, m = 0, h = arr.size() - 1;

     while(m<=h){
          if(arr[m] == 0)
               swap(arr[l++], arr[m++]);
          else if(arr[m] == 1)
               m++;
          else
               swap(arr[m], arr[h--]);
          }

     for(auto i:arr)
          cout << i << " ";
}

int sort(vector<int> &arr ){
     int brr[arr.size()];

     int c = 0;
     for (int i = 0; i < arr.size(); i++)
          if(arr[i] == 0)
               brr[c++] = arr[i] ;
     for (int i = 0; i < arr.size(); i++)
          if(arr[i] == 1)
               brr[c++] = arr[i] ;
     for (int i = 0; i <arr.size(); i++)
          if(arr[i] == 2)
               brr[c++] = arr[i] ;

     for (int i = 0; i < arr.size(); i++)
          cout << brr[i] << "  ";
}

int main(){

     vector<int> arr = {2, 2, 0, 2, 0, 0, 1, 2, 1, 0, 1, 2, 0, 1, 0, 1, 2, 1, 2, 0};

     sort(arr);

     return 0;
}


