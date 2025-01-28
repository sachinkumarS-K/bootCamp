#include<iostream>
using namespace std;

int checkPrime(int n){

     int flag = 0;
     for (int i= 2; i < n; i++){
          if(n%i == 0){
               flag = 1;
               break;
          }
     }
     if(n == 1)
          return 0;
     if(flag)
          return 0;
     else
          return 1;
}

int main(){

     int sr, er;
     cout << "Enter the range\t";
     cin >> sr >> er;

     for (int i = sr; i <= er;i++){
          if(checkPrime(i)){
               cout << i << " ";
          }
     }

          return 0;
}