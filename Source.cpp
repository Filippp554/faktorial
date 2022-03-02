#include <iostream>
using namespace std;

int main() {
    int factorial(int);
    int n, vysledok;
    cout << "Zadaj cislo " << endl;
    cin >> n;

    vysledok = factorial(n);
    cout << "Faktorial cisla " << n << "je:" << vysledok << endl;
    return 0;

}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    }
    else {
        return 1;
    }
}