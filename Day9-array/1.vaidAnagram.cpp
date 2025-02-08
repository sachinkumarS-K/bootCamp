#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int IsAnagram(string a , string b){

        vector<int> arr(26,0) ;

        for (int i = 0; i<a.length() ; i++){
                arr[a[i]-97]++;
        }

        for (int i = 0; i < b.length(); i++){
                if(arr[b[i] - 97] == 0)
                        return false;

                arr[b[i] - 97]--;
        }

                for (int i = 0; i < arr.size(); i++)
                        cout << arr[i] << endl;

        return 1;
}

    int main(){

        cout << IsAnagram("anagram", "nagaran");

        return 0;
}