#include <iostream>
using namespace std;

class captan {
private:
    int arr[4][2];
    int arr2[2][4];
public:
    void ZAPMASSIV() {
        int num = 0;
        for (int j = 0; j < 4; j++) {
            for (int i = 0; i < 2; i++) {
                num += 11;
                arr[j][i] = num;
                arr2[i][j] = num;
            }
        }
    }
    void OTPMASSIV() {
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < 4; i++) {
                cout << arr2[j][i] << " ";
            }
            cout << endl;
        }
    }
    void OTP2MASSIV() {
        for (int j = 0; j < 4; j++) {
            for (int i = 0; i < 2; i++) {
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    setlocale(0, "");
    captan objMASS;
    objMASS.ZAPMASSIV();
    objMASS.OTP2MASSIV();
    cout << endl;
    objMASS.OTPMASSIV();
    return 0;
}
