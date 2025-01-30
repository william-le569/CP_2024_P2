#include <bits/stdc++.h>
using namespace std;

const int size = 8;

void convertBinary(int n) {
    int i = size-1;
    int t;
    while(i>=0) {
        t = (n>>i)&1;
        cout << t;
        --i;
    }
}

int main() {
    // cout << "row  col  d1  d2  k" << endl;
    for(int row=0; row<size; ++row) {
        for(int col=0; col<size; ++col) {
            int d1;
            int d2;
            d1=row+col;
            d2=7-col+row;
            int freePositions = ((1 << size) - 1) & ~(col | d1 | d2);
            int pos = freePositions & -freePositions;
            cout << row << "  " << col << "  " << d1 << "  " << d2 << "  " << freePositions << "  ";
            convertBinary(freePositions);    
            cout << "  " << pos << endl;
            
            
            // cout << row << "  " << col << endl;
        }
        // cout << endl;
    }

    // for(int i=0; i<65; ++i) cout << i << endl;
    return 0;
}