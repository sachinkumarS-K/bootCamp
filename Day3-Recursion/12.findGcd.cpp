#include<iostream>
using namespace std;

int findHcf(int a , int b){

     if(b == 0)
          return a;
     return findHcf(b, a % b);
}

int main(){

     int a, b;
     cout << "Enter two numbers\t";
     cin >> a, b;

     cout << "HCF = " << findHcf(a, b);

     return 0;
}