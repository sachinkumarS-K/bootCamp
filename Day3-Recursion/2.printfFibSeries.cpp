#include<iostream>
using namespace std;

int generateFib(int n){

     if(n == 0 || n == 1)
          return n;
     else
          return generateFib(n - 1) + generateFib(n - 2);
}

void printSeries(int n ){

     for (int i = 0; i < n; i++){
          cout << generateFib(i) << " ";
     }
}

int main(){

     int n;
     cout << "Enter the no of terms\t";
     cin >> n;

     printSeries(n);

     return 0;
}