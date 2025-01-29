#include<iostream>
using namespace std;

int findSum(int n){
     if(n == 0)
          return 0;
     else
          return n % 10 + findSum(n / 10);
}

int main(){

     int n;

     cout << "Enter the Number\t";
     cin >> n;

     cout << "The sum is  " << findSum(n);

     return 0;
}