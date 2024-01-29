#include <iostream>
using namespace std;


void utility() {

    // declare the variable count here
    static int count;

    // increases the value of count by 1
    count++;

    cout << count;
}

int main() {
    int t;
    cin >> t;

    int n;
    cin >> n;

    while (n--) {

        utility();
        cout << " ";
    }
    return 0;
}