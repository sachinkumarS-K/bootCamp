#include<iostream>
using namespace std;

int main(){

      int n ;
     cout<<"Enter the row\t";
     cin >> n;

     for (int i = 1; i <= n; i++){
          for (int s = 1; s <= n - i; s++)
               cout << "  ";
          for (int j = i; j <= n; j++)
               cout << "* ";
          cout << endl;
     }
     for (int i = 1; i < n; i++){
          for (int s = 1; s <= i; s++)
               cout << "  ";
          for (int j = i + 1; j >0; j--)
               cout << "* ";
          cout << endl;
     }

          return 0;
}