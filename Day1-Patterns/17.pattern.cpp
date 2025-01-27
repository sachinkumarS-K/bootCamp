#include<iostream>
using namespace std;

int main(){

      int n ;
     cout<<"Enter the row\t";
     cin >> n;
     int c = 1;

     int arr[2 * n - 1][2 * n - 1] = {0};
     int sr = 0, er = 2 * n - 2, sc = 0, ec = 2 * n - 2;
     int t = 2 * n - 1 , x = n;
     while(c<=t*t){
          for (int i = sc; i <= ec; i++){
               arr[sr][i] = x;
               c++;
          }
          sr++;
          for (int i = sr; i <= ec; i++){
               arr[i][er] = x;
               c++;
          }
          ec--;
          for (int i = ec; i >= sc; i--){
               arr[er][i] = x;
               c++;
          }
          er--;
          for (int i = er; i >= sr;i--){
               arr[i][sc] = x;
               c++;
          }
          sc++;
          x--;
     }

     for (int i = 0; i < 2 * n - 1; i++){
          for (int j = 0; j < 2 * n - 1; j++){
               cout << arr[i][j] << " ";
          }
          cout << endl;
     }

          return 0;
}