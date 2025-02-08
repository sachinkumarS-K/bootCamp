#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     int n;
     cout << "Enter any number\t";
     cin >> n;
      if(n & (n-1)){
           cout << "false";
      }
      else{
           cout << "True";
      }



  return 0 ;
}