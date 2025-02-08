#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     int num = 70, k = 3;

     int ithBit = num >> (k-1);
        if(ithBit & 1)
            ithBit = 1;
        else
            ithBit = 0;

        int x = 1 << k-1;
        //for(int i = 0 ; i<k ; i++)
            ;

        cout << x;
        x = x| num;

        int y = x & num;

        cout<<ithBit<<" "<<x<<" "<<y;

  return 0 ;
}