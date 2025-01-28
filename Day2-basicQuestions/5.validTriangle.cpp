#include<iostream>
using namespace std;

int main(){
     int a, b, c;
     float  x, y, z;
     cout << "Enter the sides\t";
     cin >> a>>b>>c;
     cout << "Enter the angles\t";
     cin >> x>> y>>z;


     if((x+y+z) == float(180) && (a+b) >c && (b+c) >a && (a+c) >b)
          cout << "Valid triangle";
     else
          cout << "Invalid triangle";

     return 0;
}