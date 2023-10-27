#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    cout << "Int" << endl << endl;
    int arrint[] = { 1,4,5,3,67,54,66,11,9,7 };
    for (int q = 0; q < 10; q++) {
        cout << "arrint[" << q << "]=" << arrint[q] << endl;
    }
    cout << endl;
    cout << "Short" << endl << endl;
    short arrshort[] = { 1,4,5,3,67,54,66,11,9,7 };
    for (int w = 0; w < 10; w++) {
        cout << "short[" << w << "]=" << arrint[w] << endl;
    }
    cout << endl;
    cout << "Long" << endl << endl;
    long arrlong[] = { 1,4,5,3,67,54,66,11,9,7 };
    for (int e = 0; e < 10; e++) {
        cout << "long[" << e << "]=" << arrlong[e] << endl;
    }
    cout << endl;
    cout << "Flot" << endl << endl;
    float arrfloat[] = { 1.3,4.5,5.1,3.6,67.7,54.9,66.2,11.1,9.4,7.4 };
    for (int r = 0; r < 10; r++) {
        cout << "float[" << r << "]=" << arrfloat[r] << endl;
    }
    cout << endl;
    cout << "Double" << endl << endl;
    double arrdouble[] = { 1.3,4.5,5.1,3.6,67.7,54.9,66.2,11.1,9.4,7.4 };
    for (int t = 0; t < 10; t++) {
        cout << "double[" << t << "]=" << arrdouble[t] << endl;
    }
    cout << endl;
    cout << "Char" << endl << endl;
    char arrchar[] = { 'a','q','w','e','r','t','y','u','i','o'};
    for (int y = 0; y < 10; y++) {
        cout << "char[" << y << "]=" << arrchar[y] << endl;
    }
    cout << endl;
    cout << "Bool" << endl << endl;
    bool arrbool[] = { 1,0,1,0,0,1,1,0,0,1 };
    for (int u = 0; u < 10; u++) {
        cout << "bool[" << u << "]=" << arrbool[u] << endl;
    }


    return 0;
}