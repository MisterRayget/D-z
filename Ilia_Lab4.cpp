#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num;
    int num1;
    int num2;
    int num3;
    char byk1;
    cout << "Выбрете действие" << endl;
    cout << "[1] Линия" << endl;
    cout << "[2] Квадрат" << endl;
    cout << "[3] Прямоугольник" << endl;
    cout << "[4] Треугольник" << endl;
    cout << "[5] Выход" << endl;
    cin >> num;
    system("cls");
    switch (num) {
    case 1:
        cout << "Выберете положение" << endl;
        cout << "[1] Вертикальная" << endl;
        cout << "[2] Горизантальная" << endl;
        cin >> num1;
        system("cls");
        switch (num1) {
        case 1:
            cout << "Ведите длину:" << endl;
            cin >> num2;
            cout << "Напешите из чего будет линия" << endl;
            cin >> byk1;
            for (int mun1 = 0; mun1 < num2; mun1++) {
                cout << byk1 << endl;
            }
            break;
        case 2:
            cout << "Ведите длину:" << endl;
            cin >> num2;
            cout << "Напешите из чего будет линия" << endl;
            cin >> byk1;
            for (int mun2 = 0; mun2 < num2; mun2++) {
                cout << byk1;
            }

            break;
        default:
            cout << "Выберете номер из списка" << endl;
        }

        break;
    case 2:
        cout << "[1] Полый"<<endl;
        cout << "[2] Заполненный"<<endl;
        cin >> num1;
        switch (num1) {
        case 1:
            cout << "Введите длину" << endl;
            cin >> num2;
            cout << "Напешите из чего будет куб" << endl;
            cin >> byk1;
            cout << endl;
            for (int i = 0;i < num2;i++) {
                for (int j = 0;j < num2;j++) {
                    if ((j == 0) || (j == num2 - 1) || (i == 0) || (i == num2 - 1))
                        cout << byk1<<" ";
                    else {
                        cout << " "<<" ";
                    }
                }
                cout << endl;
            }
            break;
        case 2:
            cout << "Введите длину" << endl;
            cin >> num2;
            cout << "Напешите из чего будет куб" << endl;
            cin >> byk1;
            cout << endl;
            for (int i = 0;i < num2;i++) {
                for (int j = 0;j < num2;j++) {
                    cout << byk1<<" ";
                }
                cout << endl;
            }
            break;
            default:
            cout << "Выберете номер из списка" << endl;
        }
            break;
    case 3:
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cin >> num1;
        switch (num1) {
        case 1:
            cout << "Введите высоту" << endl;
            cin >> num2;
            cout << "Введите ширену" << endl;
            cin >> num3;
            cout << "Напешите из чего будет куб" << endl;
            cin >> byk1;
            cout << endl;
            for (int i = 0;i < num2;i++) {
                for (int j = 0;j < num3;j++) {
                    if ((j == 0) || (j == num3 - 1) || (i == 0) || (i == num2 - 1))
                        cout << byk1 << " ";
                    else {
                        cout << " " << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 2:
            cout << "Введите высоту" << endl;
            cin >> num2;
            cout << "Введите ширену" << endl;
            cin >> num3;
            cout << "Напешите из чего будет куб" << endl;
            cin >> byk1;
            cout << endl;
            for (int i = 0;i < num2;i++) {
                for (int j = 0;j < num3;j++) {
                    cout << byk1<<" ";
                }
                cout << endl;
            }
            break;
        default:
            cout << "Выберете номер из списка" << endl;
        }

        break;
    case 4:
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cin >> num1;
        switch (num1) {
        case 1:
            cout << "Введите высоту:" << endl;
            cin >> num2;
            cout << "Введите из чего будет треугольник" << endl;
            cin >> byk1;
            for (int i = 1;i <= num2;i++) {
                for (int j = 1;j <= num2 * 2;j++) {
                    if (j == ((num2 + 1) - (i - 1)) || j == ((num2 + 1) + (i - 1)))
                        cout << byk1;
                    else
                        if (i == num2 && j > 1)
                            cout << byk1;
                        else
                            cout << " ";
                }
                cout << endl;
            }

            break;
        case 2:
            cout << "Введите высоту:" << endl;
            cin >> num2;
            cout << "Введите из чего будет треугольник" << endl;
            cin >> byk1;
            for (int i = 0; i < num2; i++) {
                for (int j = 1; j < num2 - i; j++) {
                    cout <<" ";
                }
                for (int j = num2 - i * 2; j <= num2; j++) {
                    cout <<byk1;
                }
                cout << endl;
            }

            break;
        default:
            cout << "Выберете номер из списка" << endl;
        }

        break;
    case 5:
        cout << "Хорошего дня";
        return 0;
        break;
    default:
        cout << "Выберете номер из списка" << endl;
        break;
    }



    return 0;
}