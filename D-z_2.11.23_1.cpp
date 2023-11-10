#include <iostream>
#include <ctime>
using namespace std;
void random();
const int NUM1 = 10;
const int NUM2 = 5;
int main() {
    setlocale(0, "");
    srand(time(0));
    random();
    return 0;
}
void random() {
    int arrnum1[NUM1]{};
    int arrnum2[NUM2]{};
    //Заполнение
    for (int i = 0; i < NUM1; i++) {
        arrnum1[i] = rand()%10;
    }
    for (int j = 0; j < NUM2; j++) {
        arrnum2[j] = rand()%20;
    }
    //Выдача
    for (int i = 0; i < NUM1; i++) {
        cout << arrnum1[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < NUM2; j++) {
        cout << arrnum2[j] << " ";
    }
}
