#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     int n = 5;
     for (int i = 0; i < n; i++){
          for (int j = 0; j < n - 1 - i; j++)
               cout << "  ";
          for (int k = 0; k<2*i-1 ; k++)
               cout << "* ";
          cout << endl;
     }

          return 0;
}