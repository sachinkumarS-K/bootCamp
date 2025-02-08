#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> &arr){
        int n = arr.size() - 1;
        int l = 0, h = arr.size() - 1;
        while(l<h){
                // int m = (l + h) / 2;
                // cout << m << "  ";
                // if((m == 0 || arr[m-1] <= arr[m] ) && (m == n || arr[m] >= arr[m+1]))
                //         return arr[m];
                // else if(arr[m] < arr[m+1])
                //         l = m + 1;
                // else
                //         h = m - 1;
                int mid = l + (h - l) / 2;
                cout << mid;
                if ((mid == 0 || arr[mid - 1] <= arr[mid] )&& (mid == n  || arr[mid] >= arr[mid + 1]))
                {
                        return mid;
                }
                else if (arr[mid] < arr[mid + 1])
                {
                        l = mid + 1;
                }
                else
                {
                        h = mid - 1;
                }
        }
}


int main(){

        vector<int> arr = {3, 6, 2, 6, 7, 2};

       int p =  peakElement(arr);
       cout << p;


       return 0;
}