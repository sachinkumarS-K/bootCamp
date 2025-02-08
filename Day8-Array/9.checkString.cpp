#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkString(string s1 , string s2){
        if (s1.compare(s2) == 0)
                return true;

        int l = 0, h = s2.length() - 1;

        while (l < h)
        {

                if((s1[l] == s2[l]) && (s1[h] == s2[h])){
                        l++;
                        h--;
                }
                else if()

                cout << l << h;

                // swap(s2[l++], s2[h--]);
                // if (s1.compare(s2) == 0)
                //         return true;
        }
        if (s1.compare(s2) == 0)
                return true;
        else
                return false;
}

int main(){
        //cout << checkString("siyolsdcjthwsiplccjbuceoxmpjgrauocx", "siyolsdcjthwsiplccpbuceoxmjjgrauocx");
        cout << strlen("siyolsdcjthwsiplccpbuceoxmjjgrauocx") << "siyolsdcjthwsiplccpbuceoxmjjgrauocx"[35-8-1];

        return 0;
}