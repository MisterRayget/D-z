#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    setlocale(0, "");
    const int MasivLimit = 3;
    int arrMasiv[MasivLimit][MasivLimit] = {};
    int sumstrok[MasivLimit] = {};
    int sumstolb[MasivLimit] = {};
    cout << "Заполните Массив " << MasivLimit << "x" << MasivLimit << " числами." << endl;
    for (int i = 0;i < MasivLimit;i++) {
        for (int j = 0;j < MasivLimit;j++) {
            cout << i + 1 << "-я строка ";
            cout << j + 1 << "-й столбец: ";
            cin >> arrMasiv[i][j];
        }
        cout << endl;
    }
    system("cls");
    for (int i = 0;i < MasivLimit;i++) {
        for (int j = 0;j < MasivLimit;j++) {
            cout << setw(4) << arrMasiv[i][j] << "  ";
            sumstrok[i] += arrMasiv[i][j];
            sumstolb[i] += arrMasiv[i][j];
        }
        cout << endl;
    }
    cout <<endl << "Сумма по строкам" << endl;
    for (int i = 0;i < MasivLimit;i++) {
        cout << i + 1 << "-я строка: " << sumstrok[i] << endl;
    }
    cout <<endl << "Сумма по столбцам" << endl;
    for (int i = 0;i < MasivLimit;i++) {
        cout << i + 1 << "-й столбец: " << sumstolb[i] << endl;
    }

    return 0;
}