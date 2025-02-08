#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void findProduct(vector<int> &arr){
        int n = arr.size();
        int pre[arr.size()];
        pre[0] = arr[0];
        for(int i = 1 ; i < arr.size() ; i++)
                pre[i] = pre[i-1]*arr[i] ;

        // for(int i = 0 ; i<arr.size() ; i++)
        //         cout<<pre[i] <<"  ";


        int p = 1;
        vector<int> brr;
        for(int i = n-1 ; i>0 ; i--){
                brr[i] = brr[i-1]*p;
                p = p*arr[i] ;
        }
        brr[0] = p;

       for(int i = 0 ; i<n ; i++)
        cout<<brr[i] <<"  ";
}

int main(){

        vector<int> arr = {1,4,5,1,9};
        findProduct(arr);


  return 0 ;
}