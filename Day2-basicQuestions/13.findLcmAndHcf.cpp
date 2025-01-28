#include<iostream>
using namespace std;

int findLcm(int a , int b){
     int lcm;
     for (int i = a > b ? b : a; i <= a * b; i++){
          if(i%a == 0  && i%b == 0){
               lcm = i;
               break;
          }
     }
     return lcm;
}

int findHcf(int a,int b){
     int hcf = 1;
     for (int i = 1; i <= (a>b ? b:a); i++){
          if(a%i == 0 && b%i == 0){
               hcf = i;
          }
     }
     return hcf;
}

int main(){

     int a, b;
     cout << "Enter two numbers \t";
     cin >> a >> b;
     cout << "Lcm is  " << findLcm(a, b)<<endl;
     cout << "Hcf is  " << findHcf(a, b);

     return 0;
}