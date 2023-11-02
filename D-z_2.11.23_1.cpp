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
    int arrnum1[QWA]{} = 0;
    int arrnum2[QWA]{} = 0;
    for (int i;i < QWA;i++) {
        arrnum1[i] = srand();
    }
    for (int j;j < QWA;j++) {
        arrnum1[j] = srand();
    }
    for (int i = 0;i < QWA;i++) {
        cout << arrint1[i] << " ";
    }
    for (int j = 0;j < QWA;j++) {
        cout << arrint2[j] << " ";
    }
}
