#include <iostream>
#include <ctime>

using namespace std;

int main()
{
     setlocale(LC_ALL, "RU");
     setlocale(LC_ALL, ".UTF8");

     int str;
     int stol;
    
     cout << "Введите количетво строк: ";
     cin >> str;
     cout << "Введите количество столбцов: ";
     cin >> stol;

     int **arr = new int *[str];

     for (int i = 0; i < str; i++)
     {
          arr[i] = new int[stol];
     }

     for (int i = 0; i < str; i++)
     {
          for (int j = 0; j < stol; j++)
          {
               arr[i][j] = rand() % 50;
          }
    
     }

       for (int i = 0; i < str; i++)
     {
          for (int j = 0; j < stol; j++)
          {
               cout << arr[i][j] << '\t';
          }
          cout << endl;
     }


       for (int i=0; i < str; i++)
     {
          delete[] arr[i];
     }

     delete[] arr;
}