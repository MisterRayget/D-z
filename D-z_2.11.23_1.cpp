#include <iostream>
#include <ctime>
using namespace std;
void random();
const int QWA = 10;
int main() {
    setlocale(0, "");
    srand(time(0));
    random();
    return 0;
}
void random() {
    int arrnum1[QWA]{};
    int arrnum2[QWA]{};
    //Заполнение
    for (int i=0; i < QWA; i++) {
        arrnum1[i] = rand();
    }
    for (int j=0; j < QWA; j++) {
        arrnum2[j] = rand();
    }
    //Выдача
    for (int i = 0; i < QWA; i++) {
        cout << arrnum1[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < QWA; j++) {
        cout << arrnum2[j] << " ";
    }
}
