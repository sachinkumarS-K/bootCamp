#include<iostream>
using namespace std;

int main(){

     int n = 3,s=0;

     for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){

          for (int k = 1; k <= s; k++)
               cout << "  ";

          for (int m = 1; m <=j; m++)
               cout << "* ";
          cout << endl;
          }
          s += n;
     }

          return 0;
}