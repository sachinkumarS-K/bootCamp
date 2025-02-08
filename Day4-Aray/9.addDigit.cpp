#include<iostream>
using namespace std;

int main(){

     int n = 9;


     while(n>=10){
          int c = n;
          n = 0;
          while(c){
               n += c % 10;
               c /= 10;
          }
     }
     cout << n;

     return 0;
}