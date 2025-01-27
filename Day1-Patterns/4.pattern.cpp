#include<iostream>
using namespace std;

int main(){
     int n ;
     cout<<"Enter the row\t";
     cin >> n;

     for (int i = 0; i < n; i++){
          for (int s = 0; s < i; s++)
               cout << "  ";
          for (int j = n; j > i; j--)
               cout << "* ";
          cout << endl;
     }

          return 0;
}