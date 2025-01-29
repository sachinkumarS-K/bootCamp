#include<iostream>
using namespace std;

int findFactorial(int n){
     if(n == 1 || n == 0)
          return 1;
     else
          return n * findFactorial(n - 1);
}

int main(){

     int n;
     cout << "Enter any number\t";
     cin >> n;
    int f = findFactorial(n);
    cout << "Factorial = " << f;

    return 0;
}