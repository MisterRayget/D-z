#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int NUM = 9;
    int arrint[NUM][NUM];

    setlocale(0, "");
    for (int i = 0; i < NUM; ++i) {
        for (int j = 0; j < NUM; ++j) {
            arrint[i][j] = (1+i) * (1+j);
        }
    }
    for (int i = 0; i < NUM;++i) {
        for (int j = 0; j < NUM; ++j) {
            cout << setw(4) << arrint[i][j];
        }
        cout << endl<<endl;
    }


    return 0;
}