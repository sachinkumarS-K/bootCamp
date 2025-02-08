#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
        int arr[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

        int r = 3, c = 3;
        int sr = 0, er = 2, sc = 0, ec = 2;

        for (int i = sc; i <= ec; i++)
                cout << arr[sr][i] << " ";
        sr++;
        for (int i = sr; i <= ec; i++)
                cout << arr[i][ec] << " ";
        ec--;
        for (int i = ec; i>=sc ; i--)
                cout << arr[er][i] << " ";
        er--;
        for (int i = er; i >= sr; i--)
                cout << arr[i][sc] << " ";
        sc++;
        return 0;
}