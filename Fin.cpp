// partaray.cpp
// массив из структур
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
const int SIZE = 4;
///////////////////////////////////////////////////////////
struct part
{
 int modelnumber;
 int partnumber;
 float cost;
};
///////////////////////////////////////////////////////////
int main()
{
  ofstream out; // называем объект out
  out.open("test.txt", ios::out | ios::app); //связываем объект с файлом и делаем, чтобы он открывался для дозаписи, а не перезаписи.
 int n;
 part apart[SIZE];
 for(n = 0; n < SIZE; n++)
 {
 cout << endl;
 cout << "Введите номер модели: ";
 cin >> apart[n].modelnumber;
 cout << "Введите номер части: ";
 cin >> apart[n].partnumber;
 cout << "Введите стоимость: ";
 cin >> apart[n].cost;
 }
 cout << endl;
 for(n = 0; n < SIZE; n++)
 {
 cout << "Модель " << apart[n].modelnumber;
  cout << " Часть " << apart[n].partnumber;
 cout << " Стоимость " << apart[n].cost << endl;
 }
  for(n=0;n<SIZE;n++)
 {
  out << apart[n].modelnumber << " ";
  out << apart[n].partnumber << " ";
  out << apart[n].cost << endl;
 }

/* for(int i=0; i<4; i++)    // или так
        out << apart[i].modelnumber << endl;
        */
out.close(); // закрываем файл
ifstream fin("test.txt"); 
int N, k;
    int A[1000];
    if (!fin.good())
    {
        cout << "Файл input.txt не найден!" << endl;
    }
    else
    {
        k = 0;
        while (fin >> N)
        {
            A[k++] = N;
        }
        cout << "Искомый массив:" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
        cout << "Длина массива: " << k <<endl;
        cout << A[k]<< endl;
    }
    fin.close();
 system("pause");
 return 0;
}
