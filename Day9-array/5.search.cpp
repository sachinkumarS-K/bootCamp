#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
        vector<vector<int>> matrix = { {1},{3} };
        int i = 0 , target = 3 , x;
        int j = matrix[0].size()-1;
        cout << i;
        if (j == 0 && matrix[i][j] == target)
                cout<<"F";
        while (i <= j)
        {
                cout << i << j;
                if (matrix[i][j] > target){
                        cout << "Sf";
                        j--;
                }
                        // j--;
                else if (matrix[i][j] == target){
                        cout << i<<j;
                        break;
                }
               else
                        i++;
        }

  return 0 ;
}