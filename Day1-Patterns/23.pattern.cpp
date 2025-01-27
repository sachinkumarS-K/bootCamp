#include<iostream>
using namespace std;

int main(){
      int n ;
     cout<<"Enter the row\t";
     cin >> n;

     for (int i = 1; i < n; i++){
          for (int s = 1; s <= 2 * i - 2; s++)
               cout << "  ";
          for (int j = i; j <= n; j++)
               cout << "* ";
          cout << endl;
     }

     for (int i = 1; i <= n; i++){
     for (int s = 1; s <= 2 * n - 2*i ; s++)
               cout << "  ";
          for (int j = 1; j <=i; j++)
               cout << "* ";
          cout << endl;
     }
          return 0;
}