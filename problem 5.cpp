#include <iostream>
using namespace std;

int search(const int nums[], int n, int target){
    int left = 0;
    int right = n-1;
    while (left <= right) {
        int mid = (left+right)/2;
        if (nums[mid] == target)
            return mid;
        if (nums[mid] < target)
            left = mid+1;
        else
            right = mid-1;
    }
    return -1;
}


int main()
{
    int n,target;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> target;
    cout << search(a,n, target);
}
