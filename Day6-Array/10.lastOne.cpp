#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 int lastIndex(string s) {
        for(int i = 0 ; i<s.size() ; i++){
          //    cout << s[i] << "  ";
             if (s[i] == '1' && s[i+1] != '1')
                  return i;
        }

        return -1;
    }

int main(){

     cout << lastIndex("1100");

     return 0;
}