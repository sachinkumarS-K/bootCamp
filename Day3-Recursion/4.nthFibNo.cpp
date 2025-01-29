#include<iostream>
using namespace std;

int nthTerm(int n){
     if(n == 0 || n == 1)
          return n;
     else
          return nthTerm(n - 1) + nthTerm(n - 2);
}

int main(){

     int n;
     cout << "Enter the nth term\t";
     cin >> n;
     cout << "The nth term is  : " << nthTerm(n);

     return 0;
}