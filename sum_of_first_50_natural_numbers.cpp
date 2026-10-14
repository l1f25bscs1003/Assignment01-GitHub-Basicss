
#include <iostream>
using namespace std;

int main() {
    int n = 50;
    int sum = 0;

    for (int i = 0; i <= 50; i++) {
        sum = sum + i;
    }

    cout << "Sum of first 50 Natural Numbers are:-" << sum << endl;

    int n1 = (n + 1) / 2;
    cout << "Sum using formula n(n+1)/2: " << n1 << endl;

    return 0;
}
