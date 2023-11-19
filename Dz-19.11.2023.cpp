#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(0, "");
    int size;
    cout << "Введите размер матрицы: ";
    cin >> size;
    
    // Создание квадратной матрицы
    int** matrix = new int* [size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    // Заполнение матрицы рандомными числами
    srand(time(0));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 100; // Диапазон случайных чисел от 0 до 99
        }
    }

    // Вывод исходной матрицы
    cout << "Исходная матрица:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl << endl;
    }

    // Поиск минимального и максимального элементов
    int min_element = matrix[0][0];
    int max_element = matrix[0][0];
    int min_row = 0;
    int min_col = 0;
    int max_row = 0;
    int max_col = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] < min_element) {
                min_element = matrix[i][j];
                min_row = i;
                min_col = j;
            }
            if (matrix[i][j] > max_element) {
                max_element = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    // Меняет местами минимальный и максимальный элементы
    int temp = matrix[min_row][min_col];
    matrix[min_row][min_col] = matrix[max_row][max_col];
    matrix[max_row][max_col] = temp;

    // Вывод измененной матрицы
    cout << "\nИзмененная матрица:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout <<setw(4)<< matrix[i][j];
        }
        cout << endl << endl;
    }

    // Вывод индексов минимального и максимального элементов
    cout << "\nИндексы минимального элемента: " << min_row << ", " << min_col << endl;
    cout << "Индексы максимального элемента: " << max_row << ", " << max_col << endl;

    // Освобождение памяти
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}