#include<iostream>
using namespace std;

int main(){
     int n;
     cout << "Enter the range \t";
     cin >> n;
     int s = (n * (n + 1)) / 2;
     cout << "The sum is : " << s;

     return 0;
}