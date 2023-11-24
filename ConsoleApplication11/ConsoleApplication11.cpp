#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
//Лабараторная работа номер 6.
//Вариант 21, задание номер 1, Статический массив.
//Дана матрица размера M × N. 
//В каждой ее строке найти количество элементов, 
//меньших среднего арифметического всех элементов этой строки.
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    const int m = 3;
    const int n = 3; 
    // Создание двумерного массива
    int matrix[m][n];
    // Ввод элементов матрицы
    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    // Поиск количества элементов, меньших среднего арифметического каждой строки
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        double sred = sum / n;  // Среднее арифметическое элементов строки
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < sred) {
                count++;
            }
        }
        cout << "В строке " << i + 1 << " количество элементов, меньших среднего арифметического: " <<
            count << endl;
    }
}
