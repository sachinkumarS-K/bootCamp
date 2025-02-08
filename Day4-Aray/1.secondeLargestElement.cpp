#include<iostream>
using namespace std;

int findSecondLargestElement(int arr[],int n){

    int max = 0 ;
        int pre = -1 ;

        for (int i = 1; i < n; i++){
          if(arr[i] > arr[max]){
               pre = max;
               max = i;
          }
          else if(arr[max] != arr[i]){
               if(pre == -1 || arr[pre] < arr[i])
                    pre = i;
          }
        }

             return arr[pre];
}

int main(){

     int arr[] = {12, 35, 1 ,10 ,34, 1};
     int n = sizeof(arr) / sizeof(arr[0]);

     int a = findSecondLargestElement(arr, n);

     cout << "The second largest number is  " << a;

     return 0;
}