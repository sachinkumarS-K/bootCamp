#include<iostream>
using namespace std;

int findPower(int n){
     if(n == 0)
          return 1;
     else
          return 2 * findPower(n - 1);
}

int main(){

     int n;
     cout << "Enter the power\t";
     cin >> n;
     cout << "The 2 power " << n << " is " << findPower(n);

     return 0;
}