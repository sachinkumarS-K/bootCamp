#include<iostream>
#include<string.h>
using namespace std;

void swap(char *a , char * b){
     char t = *a;
     *a = *b;
     *b = t;
}

void reverseString(char str[] , int l , int h ){

     while (l<h){
          swap(&str[l], &str[h]);
          reverseString(str, ++l, --h);
     }
}

int main(){

     char str[10];
     cout << "Enter the string\t";
     cin >> str;

     int l = strlen(str);

     reverseString(str , 0 , l-1 );


     cout << "Reversed String  " << str;

     return 0;
}