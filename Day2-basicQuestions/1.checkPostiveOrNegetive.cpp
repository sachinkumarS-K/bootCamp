#include<iostream>
using namespace std;

int main(){

     int n;
     cout << "Enter the number\t";
     cin >> n;
     if(n > 0)
          cout << "Number is positive";
     else if(n<0)
          cout << "Number is negetive";
     else
          cout << "Number is equal to 0";

     return 0;
}