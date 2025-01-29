#include<iostream>
using namespace std;

int sumOfNaturalNo(int n){
     if(n == 0)
          return 0;
     else
          return n + sumOfNaturalNo(n - 1);
}

int main(){

     int n;
     cout << "Enter the range to sum \t";
     cin >> n;
     cout << "The sum is :  " << sumOfNaturalNo(n);

     return 0;
}