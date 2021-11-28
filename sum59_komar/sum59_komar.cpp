#include <iostream>
using namespace std;

int n;
int* mass = new int[n];
void lengthAndFiilArray(int* array, int length);
void clear();


int main() {
    setlocale(LC_ALL, "Russian");
    lengthAndFiilArray(mass, n);

    float countplus = 0;
    for (int i = 0; i < n; i++)
    {
        while (mass[i] >= 0)
        {
            countplus = countplus + mass[i];
            break;
        }
    }
    cout << "Сумма положительных элементов: " << countplus;


    float countminus = 0;
    for (int i = 0; i < n; i++)
    {
        while (mass[i] <= 0)
        {
            countminus = countminus + abs(mass[i]);
            break;
        }
    }
    cout << "Сумма отрицательных элементов: " << countminus << endl;


    cout << "(+a) + (+a) / (-a) + (-a) = " << countplus / countminus;

    clear();
    return 0;
}


void lengthAndFiilArray(int* array, int length)
{
    cout << "Введите длинну массива: " << endl;
    cin >> n;

    cout << "Введите массив: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> mass[i];
    }
}


void clear()
{
    delete[] mass;
}