#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cout << "Enter any number\t";
     cin >> n;
     int k;
     cout << "Enter the bit\t";
     cin >> k;

     // 1010

     int x = (n >> k-1)&1;
     cout << x;

     return 0;
}