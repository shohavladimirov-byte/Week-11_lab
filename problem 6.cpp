#include <iostream>
using namespace std;

void duplicateZeros(int a[], int n) {
int newArr[n];

int k = 0;

for (int i = 0; i < n; i++) {
    
    if (a[i] == 0) {
        newArr[k] = 0;
        k++;
        
    if (k < n) {
        newArr[k] = 0;
        k++;}
    }
    
    else {
        if (k < n) {
            newArr[k] = a[i];
            k++;
        }
    }
}

for (int g = 0; g < n; g++) {
    cout << newArr[g] << " ";
}
}







int main() {
int n;
cin >> n;
int a[n];

for (int q = 0; q < n; q++) {
    cin >> a[q];
}
    
duplicateZeros(a, n);
}


