#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    const int NUM = 4;
    string arrslov[NUM] = { "импортный","картина","лесной","эскпорт" };
    for (int i = 0;i < NUM;i++) {
        for (int j = 0;j < NUM;j++) {
            cout << arrslov[i]<< " " << arrslov[j]<<"<->" << arrslov[j] << " " << arrslov[i] << endl;
        }
        cout << endl;
    }

    return 0;
}