#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int f = 0, s = 1;
    for (int i = 0; i < n; ++i) {
        int t= f+ s;
        f = s;
        s = t;
    	cout << t << " ";
    }

    return 0;
}