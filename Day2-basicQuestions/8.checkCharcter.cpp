#include<iostream>
using namespace std;

int main(){
      char ch;
     cout << "Enter any charcter\t";
     cin >> ch;

     if(ch >= 'a' && ch <= 'z')
          cout << "Character is lowercase";
     else if(ch>='A' && ch <= 'Z')
          cout << "Charcter is uppercase";
     else
          cout << "Character is special character";

  return 0 ;
}