#include<iostream>
using namespace std;

int main(){

     int n ;
     cout<<"Enter the row\t";
     cin >> n;

     for (int i = 0; i < n; i++){
          for (int j = 0; j <= i; j++)
               printf("%c ", 65 + j );
               cout << endl;
     }

          return 0;
}