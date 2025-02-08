#include<iostream>
using namespace std;

int main() {
    string str = "day";

    int l = 0 ;
        int i = str.size()-1;
        cout << i;

        if(i == 0) return l+1;

        while(i>=0 && str[i] == ' ')
            i-- ;

          if(i == 0) return l+1;

        while(i>=0 && str[i] != ' '){
            l++;
            i--;
        }


//     cout << i;
//     // Trim trailing spaces
//     while (i >= 0 && str[i] == ' ') {
//         i--;
//     }
//     cout << i;
//     // Count last word length
//     while (i >= 0 && str[i] != ' ') {
//         length++;
//         i--;
//     }

    cout << "Length of the last word: " << l << endl;

    return 0;
}
