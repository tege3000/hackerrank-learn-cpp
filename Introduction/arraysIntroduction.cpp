#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);

    int arr[n];
    int value;

    for(int i = 0; i < n; i++) {
        scanf("%d", &value);
        arr[i] = value;
    }

    for(int i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}