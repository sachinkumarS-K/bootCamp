#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void findPair(vector <int> &arr , int t){
        int l = 0, h = arr.size() - 1;

        while(l<h){

                if((arr[l] + arr[h]) == t){
                        cout << l << "  " << h;
                        break;
                }
                if ((arr[l] + arr[h]) < t)
                        l++;
                else
                        h--;
        }
}

int main(){

        vector<int> arr = {2, 5, 7, 9, 11, 15, 20, 21};
        int k = 29;
        findPair(arr, k);

        return 0;
}