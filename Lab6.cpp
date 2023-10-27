#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int NUM = 10;
    int arrint[NUM][NUM];

    setlocale(0, "");
    for (int i = 1; i < NUM; ++i) {
        for (int j = 1; j < NUM; ++j) {
            arrint[i][j] = i * j;
        }
    }
    for (int i = 1; i < NUM;++i) {
        for (int j = 1; j < NUM; ++j) {
            cout << setw(4) << arrint[i][j];
        }
        cout << endl<<endl;
    }


    return 0;
}