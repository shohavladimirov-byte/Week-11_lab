#include <iostream>
using namespace std;

int largestAlt(const int gain[], int n){
    int max_alt = 0;
    int alt = 0;
    for (int i = 0; i<n; i++){
        alt+=gain[i];
        if (max_alt<alt){
            max_alt = alt;
        }
    }
    return max_alt;
}


int main()
{
    int  n,a[n];
    cin >> n;
    for (int j=0; j<n; j++){
        cin >> a[j];
    }
    
    cout << largestAlt(a,n);
}
