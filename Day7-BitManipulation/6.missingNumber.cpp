#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int>arr = {1,2,4,5,6,7,8,9};
     int n = 9;
     int a = 0;
     for (int i = 0; i < arr.size(); i++)
          a ^= arr[i];

     int b = 0;
     int x = n % 4;
     if(x == 0)
          b = n;
     else if(x == 1)
          b = 1;
     else if (x == 3)
          b = 0;
     else
          b = n + 1;

     // if(n % 4 == 0)
     //      b = n;

     cout << "The missing number is " <<( b ^ a);

     return 0;
}