#include <iostream>
using namespace std;

int sum(int n) {
    int t = 0;
    while (n != 0) {
        t += n % 10;
        n /= 10;
    }
    return t;
}

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите число: ";
    cin >> n;

    int result = n;
    do {
        result = sum(result);
        cout << result << endl;
    } while (result >= 10);

    return 0;
}