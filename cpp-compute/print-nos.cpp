#include <iostream>

using namespace std;

extern "C" {
    void printNos(int n) {
        if (n > 0) {
            printNos(n - 1);
            cout << n << endl;
        }
    }
}

int main() {
    cout << "Main function" << endl;
    return 0;
}
