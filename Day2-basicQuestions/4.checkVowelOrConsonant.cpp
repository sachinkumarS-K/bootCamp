#include<iostream>
#include<ctype.h>
using namespace std;

int main(){

     char ch;
     cout << "Enter any charcter\t";
     cin >> ch;
     ch = tolower(ch);
     if(! (ch >=98 && ch <=122)){
          cout << "Invalid charcter";
        return 0;
     }


     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
          cout << "Vowel";
     else
          cout << "Consonant";

  return 0 ;
}