#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
        int arr[2][4] = {
            {32, 44, 27, 23},
            {54, 28, 60, 62},
        };
        // int c = 0 , sr = 0 , sc = 0 , ec = 3 , er = 1;

        // while(c < 8){

        //         for (int i = sc; i <= ec && c<8; i++){
        //                 cout << arr[sc][i] <<" ";
        //                 c++;
        //         }
        //         sr++;

        //         for (int i = sr; i <= ec && c<8; i++){
        //                 cout << arr[i][ec] << " ";
        //                 c++;
        //         }
        //         ec--;
        //         break;
        //         for (int i = ec; i >=sc && c<8 ; i--){
        //                 cout << arr[er][i] << " ";
        //                 c++;
        //         }
        //         er--;
        //         for (int i = ec; i >= sr && c<8; i--){
        //                 cout << arr[i][sc] << " ";
        //                 c++;
        //         }
        //         sc++;
        // }

        // int row = arr.size();
        // int col = arr[0].size();
        // vector<int> ans;
        // int c = 0, i;
        // int startCol = 0, startRow = 0, endRow = row - 1, endCol = col - 1;
        // while (c < (row * col))
        // {
        //         for (i = startCol; i <= endCol && c < row * col; i++)
        //         {
        //                 ans.push_back(arr[startRow][i]);
        //                 c++;
        //         }
        //         startRow++;
        //         for (i = startRow; i <= endRow && c < row * col; i++)
        //         {
        //                 ans.push_back(arr[i][endCol]);
        //                 c++;
        //         }
        //         endCol--;
        //         for (i = endCol; i >= startCol && c < row * col; i--)
        //         {
        //                 ans.push_back(arr[endRow][i]);
        //                 c++;
        //         }
        //         endRow--;
        //         for (i = endRow; i >= startRow && c < row * col; i--)
        //         {
        //                 ans.push_back(arr[i][startCol]);
        //                 c++;
        //         }
        //         startCol++;
        // }

        return 0;
}