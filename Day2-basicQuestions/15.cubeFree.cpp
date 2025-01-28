#include<iostream>
#include<math.h>
using namespace std;

int isCubeFree(int n){
     cout << n;
     for (int i = 2; i <= cbrt(n); i++){
          if(n%(i*i*i) == 0)
               return 0;
     }
     return 1;
}

void findAandB(int n){
     for (int a = 1; a <= cbrt(n); a++){
          int a3 = a * a * a;
          if(n%a3 == 0){
               int b = n / a3;
               if(isCubeFree(b)){
                    cout << "A =  " << a << endl
                         << "B =  " << b;
               }
          }
     }
}

int main(){

     findAandB(108);

     return 0;
}