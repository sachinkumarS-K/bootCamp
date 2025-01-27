#include<iostream>
using namespace std;

int main(){

     int n ;
     cout<<"Enter the row\t";
     cin >> n;

     for (int i = n-1; i >=0; i--){
          for (int s = 0; s < n - 1-i; s++){
               cout << "  ";
          }
          int c = 1;
          for (int j = 0; j < 2 * i+1; j++){
               if(j<(2*i+1)/2){
                    cout << c++ << " ";
               }
               else
                    cout << c-- << " ";
          }
          cout << endl;
     }

          return 0;
}