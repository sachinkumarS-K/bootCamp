#include<iostream>
using namespace std;

int main(){

     int n ;
     cout<<"Enter the row\t";
     cin >> n;

     for (int i = 0; i < n; i++){
          for (int s = 0; s < i;s++)
               cout << "  ";
          for (int j = 0; j < n * 2 - 1-2*i; j++)
               if (j %2 == 0)
                    {
                         cout << "* ";
                    }
                    else
                    {
                         cout << "  ";
                    }

          cout << endl;
     }


          return 0;
}