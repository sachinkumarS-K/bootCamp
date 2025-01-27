#include<iostream>
using namespace std;

int main(){
      int n ;
     cout<<"Enter the row\t";
     cin >> n;

     for (int i = 0; i < n; i++){
          int x;
          for (int j = 0; j < n;j++){
               x = 65 + j;
               if((i+j) <n)
                    cout << char(x) << " ";
               else
                    cout << "  ";
          }
         // if(i == 0)
               x = x - 1;

          // for (int s = 1; s <= i; s++)
          //          cout << "  ";

          for (int k = 0; k < n-1; k++){

               cout << char(x--) << " ";
          }

               cout << endl;
     }

          return 0;
}