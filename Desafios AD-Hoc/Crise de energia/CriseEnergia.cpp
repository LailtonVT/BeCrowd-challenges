#include <iostream>

using namespace std;

int main() {
    int N;
    while (true) {
        cin >> N;
        if (N == 0) {
            break;
        }

        int m = 1; // Começamos com m = 1
        int current_region = 1; // Iniciamos na região 1

        while (true) {
            current_region = (current_region + m - 1) % N + 1;

            if (current_region == 13) {
                break;
            }

            N--; // Decrementamos N para refletir o desligamento da região atual
            m++;  // Incrementamos m
        }

        cout << m << endl;
    }

    return 0;
}
