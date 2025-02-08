#include<iostream>
using namespace std;

int main(){
     string num1 = "11", num2 = "123";


     int a =0, b = 0;
     for (int i = num1.length()-1; i >= 0; i--)
          a = a * 10 + (num1[i] - 48);

     for (int i = num2.length()-1; i >= 0; i--)
          b = b * 10 + (num2[i] - 48);

     cout <<  b;

     return 0;
}