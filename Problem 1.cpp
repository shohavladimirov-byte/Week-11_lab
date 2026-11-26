#include <iostream>
using namespace std;

int countValue(const int a[], int n, int x){
    int c = 0;
    for (int i=0; i<n; i++){
        if (x==a[i]){
            c+=1;
        }
    } 
    return c;
}


int main()
{
    int  n,a[n], x;
    cin >> n;
    for (int j=0; j<n; j++){
        cin >> a[j];
    }
    cin >> x;
    
    cout << countValue(a, n, x);
}
