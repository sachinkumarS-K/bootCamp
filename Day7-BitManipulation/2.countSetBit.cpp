#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cout << "Enter any number\t";
     cin >> n;
     int c = 0;
     while(n){
          c++;
          n = n & n - 1;
     }
     cout << "Count of set bit is  " << c;

     return 0;
}