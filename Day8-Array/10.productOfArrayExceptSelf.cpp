#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void product(vector<int> arr){
        int n = arr.size();
        vector<int> p(n);
        p[0] = arr[0];
        for (int i = 1; i < n; i++)
                p[i] = p[i - 1] * arr[i];

        int pd = 1;

        for (int i = n - 1; i >= 0; i--){
                p[i] = p[i - 1] * pd;
                //cout << p[i] << " ";

                pd *= arr[i];
                // cout << pd << "  ";
        }
        p[0] = pd;

        for (int i = 0; i < n; i++)
                cout << p[i] << "  ";
}

int main(){
        vector<int> arr = {1,2,3,4};
        product(arr);


        return 0;
}