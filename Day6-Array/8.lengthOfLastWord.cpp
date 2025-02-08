#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     string s = "   fly me   to   the moon  ";
     int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ')
      --i;

    cout << s[24] << endl;
    const int lastIndex = i;
    while (i >= 0 && s[i] != ' ')
      --i;

    cout << lastIndex - i;

    return 0;
}