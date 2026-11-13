#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a,b,c;
        cin >> a >> b >> c;
        std::string winning;
        if(c%2==0) {
            if(a<=b) cout << "Second" << "\n";
            else cout << "First" << "\n";
        }
        else if(c%2!=0) {
            if(b<=a) cout << "First" << "\n";
            else cout << "Second" << "\n";
        }
    }
    return 0;
}


