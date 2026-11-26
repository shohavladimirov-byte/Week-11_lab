#include <iostream>
#include <cstring>
using namespace std;

void revStr(char s[], int n){
    cin.getline(s, n);
    n = strlen(s);
    for (int i = n-1; i >= 0; i--) {
        cout << s[i];
    }
}


int main()
{
    int n;
    char s[100000];
    cin >> s;
    revStr(s, n);
}
