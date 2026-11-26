#include <iostream>
using namespace std;

void dublicateZeros(int a[], int n){
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-1; j++) {
            if (a[i]==0) {
                a[i+2] = a[j];
                a[i+1]=0;
            }
            cout << a[i] << " ";
        }
    }
}


int main()
{
    int  n;
    cin >> n;
    int a[n];
    for (int j=0; j<n; j++){
        cin >> a[j];
    }
    dublicateZeros(a, n);
}
