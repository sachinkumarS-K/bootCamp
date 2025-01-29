#include<iostream>
using namespace std;

int countDigit(int n){
     static int i = 0;
     if(n == 0)
          return 0;
     i++;

     countDigit(n / 10);
     return i;
}

int main(){

     int n;
     cout << "Enter the Number\t";
     cin >> n;

     cout << "The digit count\t" << countDigit(n);

     return 0;
}