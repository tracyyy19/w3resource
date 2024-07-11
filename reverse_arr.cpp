#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n; // size of array 
    
    cin >> n ; 
    
    int nums[n-1]; 
    
    for(int i=0; i<n ; i++){
        cin >> nums[i];
    }
    
    
    cout << endl;
    for (int j=(n-1) ; j>=0; j-- ){
        cout << nums[j] << " ";
    }
    
    return 0;
}
