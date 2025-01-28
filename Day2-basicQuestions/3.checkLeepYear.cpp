#include<iostream>
using namespace std;

int main(){

     int year;
     cout << "Enter any year\t";
     cin >> year;
     if(year %4 == 0 && year%100 != 0 || year %400 == 0)
          cout << "Leep year";
     else
          cout << "Not a leep year";

     return 0;
}