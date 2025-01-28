#include<iostream>
using namespace std;

int main(){

     int n;
     cout << "Enter the number\t";
     cin >> n;

     int t = n;
     int rev = 0;
     while (t){
          rev = rev * 10 + t % 10;
        t /= 10;
     }
     if(n == rev)
          cout << "The number is palindrome";
     else
          cout << "The nulmber is not palindrome";

     return 0;
}