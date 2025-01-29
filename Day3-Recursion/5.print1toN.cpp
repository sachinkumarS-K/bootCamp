#include<iostream>
using namespace std;

void printSeries(int n){
     if(n == 1){
          cout << n << " ";
          return;
     }
     printSeries(n - 1);
     cout << n << " ";
}

int main(){
     int n;

     cout << "Enter the range\t";
     cin >> n;

     printSeries(n);



          return 0;
}