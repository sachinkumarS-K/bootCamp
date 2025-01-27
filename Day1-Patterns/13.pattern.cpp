#include<iostream>
using namespace std;

int main(){

     int n ;
     cout<<"Enter the row\t";
     cin >> n;

     for (int i = 0; i < n; i++){
          for (int s = 0; s < n - 1-i; s++){
               cout << "  ";
          }
          int c = 0;
          for (int j = 0; j < 2 * i+1; j++){
               if(j<(2*i+1)/2){
                    cout << char(65+c++) << " ";
               }
               else
                    cout << char(65+c--) << " ";
          }
          cout << endl;
     }

          return 0;
}