#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     int a, b;
     cout << "Enter two numbers\t";
     cin >> a >> b;

     a = a ^ b;
     int c = 0;
     while(a){
          c++;
          a = a & (a - 1);
     }

     cout << "Min flip required are  " << c;

     // 1010  0101

     return 0;
}