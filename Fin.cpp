// partaray.cpp
// ���ᨢ �� �������
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
  ofstream out; // ���뢠�� ��ꥪ� out
  out.open("test.txt", ios::out | ios::app); //��뢠�� ��ꥪ� � 䠩��� � ������, �⮡� �� ���뢠��� ��� �������, � �� ��१����.
 int n;
 part apart[SIZE];
 for(n = 0; n < SIZE; n++)
 {
 cout << endl;
 cout << "������ ����� ������: ";
 cin >> apart[n].modelnumber;
 cout << "������ ����� ���: ";
 cin >> apart[n].partnumber;
 cout << "������ �⮨�����: ";
 cin >> apart[n].cost;
 }
 cout << endl;
 for(n = 0; n < SIZE; n++)
 {
 cout << "������ " << apart[n].modelnumber;
  cout << " ����� " << apart[n].partnumber;
 cout << " �⮨����� " << apart[n].cost << endl;
 }
  for(n=0;n<SIZE;n++)
 {
  out << apart[n].modelnumber << " ";
  out << apart[n].partnumber << " ";
  out << apart[n].cost << endl;
 }

/* for(int i=0; i<4; i++)    // ��� ⠪
        out << apart[i].modelnumber << endl;
        */
out.close(); // ����뢠�� 䠩�
ifstream fin("test.txt"); 
int N, k;
    int A[1000];
    if (!fin.good())
    {
        cout << "���� input.txt �� ������!" << endl;
    }
    else
    {
        k = 0;
        while (fin >> N)
        {
            A[k++] = N;
        }
        cout << "�᪮�� ���ᨢ:" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
        cout << "����� ���ᨢ�: " << k <<endl;
        cout << A[k]<< endl;
    }
    fin.close();
 system("pause");
 return 0;
}
