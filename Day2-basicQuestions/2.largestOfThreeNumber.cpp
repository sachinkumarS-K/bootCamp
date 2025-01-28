#include<iostream>
using namespace std;

int main(){

     int a, b, c , l;
     cout << "Enter three numbers\t";
     cin >> a >> b >> c;
     if(a>b)
          if(a>c)
               l = a;
          else
               l = c;
     else
          if(b>c)
               l = b;
          else
               l = c;

          cout << "The largest among three is : " << l;

          return 0;
}