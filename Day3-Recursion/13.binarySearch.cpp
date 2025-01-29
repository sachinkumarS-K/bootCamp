#include<iostream>
using namespace std;

int binarySearch(int arr[] , int l , int h , int k){

     if(l>h)
          return -1;

           int m = (l+h)/ 2;
          if(arr[m] < k)
              return binarySearch(arr, m+1, h, k);
          else if(arr[m] == k)
               return m;
          else
              return binarySearch(arr, l, m-1, k);

          return m;

}

int main(){

     int arr[] = {1, 4, 6, 10, 15, 20, 25, 30, 45, 50, 55, 60};
     int n = sizeof(arr) / sizeof(arr[0]);

      cout << "Index = " << binarySearch(arr,0, n-1,1);

     return 0;
}