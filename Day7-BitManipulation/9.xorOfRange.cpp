#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int xorr (int n) {
     int x = n % 4;
     if(x == 0)
          return n;
     else if(x == 1)
          return 1;
     else if(x == 2)
          return n + 1;
     else
          return 0;
}

int findXor(int l , int h){

     return (xorr(l - 1) ^ xorr(h));
}


    int main(){

     int l, h;
     cout << "Enter the lower range and higer range\t";
     cin >> l >> h;

     cout << "The Xor is  " << findXor(l, h);

     return 0;
}