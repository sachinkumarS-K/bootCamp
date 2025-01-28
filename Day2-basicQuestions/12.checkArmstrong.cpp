

#include<iostream>
#include<math.h>
using namespace std;

int main(){

     int n;
     cout << "Enter the number: ";
     cin >> n;

     int s = 0;
     int c = 0;
     int t = n;

     while(t){
          c++;
          t /= 10;
     }

     t = n;
     while(t){
          int r = t % 10;
          s += pow(r, c);
          t /= 10;
     }

     cout << "Sum of powers of digits: " << s << endl;

     if(n == s)
          cout << "The number is an Armstrong number." << endl;
     else
          cout << "The number is not an Armstrong number." << endl;

     return 0;
}
