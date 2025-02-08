
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
        int r = 3, c = 3;
        int arr[r][c] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

        for (int i = 0; i < r; i++){
                for (int j = i + 1; j < c; j++){
                        //cout << arr[i][j] << "  ";
                        swap(arr[i][j], arr[j][i]);
                }
        }
        for (int i = 0; i < r; i++){
                for (int j = 0; j < c; j++){
                        cout << arr[i][j] << "  ";
                }
                cout << endl;
        }

                return 0;
}