#include<iostream>
using namespace std;

int main(){

     char ch;
     cout << "Enter any charcter\t";
     cin >> ch;
     if(!((ch >=65 && ch<=90) || (ch >=98 && ch <=122))){
          cout << "Invalid charcter";
        return 0;
     }
     switch (ch)
     {
     case 'a' :
     case 'e' :
     case 'i' :
     case 'o' :
     case 'u' :
     case 'A' :
     case 'E' :
     case 'I' :
     case 'O' :
     case 'U' :
          cout << "character is vowel\n";
          break;
     default:
          cout<<"Charcter is consonant";
     }

     return 0;
}