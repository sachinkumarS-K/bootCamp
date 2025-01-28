#include<iostream>
using namespace std;

int main(){
     int n;
     cout << "Enter the number \t";
     cin >> n;
     int flag = 1;
     for (int i = 2; i < n; i++){
          if(n%i == 0){
               flag =0 ;
               break;
          }
     }
     if(flag)
          cout << "The number is prime";
     else
          cout << "The number is not  prime";

          return 0;
}