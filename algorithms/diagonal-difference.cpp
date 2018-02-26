#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int lines;
    long diff = 0;
    cin >> lines;
    vector<vector<int>> v;
    v.resize(lines);

    int tmp_i;
    for(int i=0; i<lines; i++) {
        for(int j=0; j<lines; j++) {
            cin >> tmp_i;
            v[i].push_back(tmp_i);
        }
    }
    
    //Get difference of sum of diagonals
    for(int y=0, x=lines; y<lines; ++y){
        diff += v[y][y] - v[y][--x];
    }

    cout << abs(diff);  
    return 0;
}
