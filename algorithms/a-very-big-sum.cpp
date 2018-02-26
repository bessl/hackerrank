#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int number_cnt;
    long result = 0;
    long tmp_v = 0;
    
    cin >> number_cnt;
    
    for (int i=0; i<number_cnt; i++) {
        cin >> tmp_v;
        result += tmp_v;
    }
    
    cout << result;    
    return 0;
}
