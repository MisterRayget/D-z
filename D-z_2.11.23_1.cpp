#include <iostream>
#include <cstdlib>
using namespace std;
void random();
const int QWA = 10;
int main(){
    setlocale(0, "");
    srand(time(0));
    random();
    return 0;
}
void random() {
    int num1[QWA]{ 1 + rand() % 20,1 + rand() % 20, 1 + rand() % 20, 1 + rand() % 20, 1 + rand() % 20, 1 + rand() % 20, 1 + rand() % 20, 1 + rand() % 20, 1 + rand() % 20, 1 + rand() % 20, };
    int num2[QWA]{ 1 + rand() % 10,1 + rand() % 10, 1 + rand() % 10, 1 + rand() % 10, 1 + rand() % 10, 1 + rand() % 10, 1 + rand() % 10, 1 + rand() % 10, 1 + rand() % 10, 1 + rand() % 10, };
    for (int i = 0;i < QWA;i++) {
        cout << num1[i] << " ";
    }
    cout << endl;
    for (int j = 0;j < QWA;j++) {
        cout << num2[j] << " ";
    }
}
