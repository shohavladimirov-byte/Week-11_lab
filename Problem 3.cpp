#include <iostream>
using namespace std;

void shufle(const int nums[], int n, int result[]){
    for (int i = 0; i < n; i++){
        result[2*i]=nums[i];
        result[2*i+1]=nums[i+n];
    }
    for (int j = 0; j < 2*n; j++){
        cout << result[j] << " ";
    }

}


int main()
{
    int  n;
    cin >> n;
    int k = 2*n;
    int a[k];
    int result[k];
    for (int j=0; j<2*n; j++) {
        cin >> a[j];
    }
    shufle(a, n, result);
}
