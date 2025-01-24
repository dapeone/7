#include <iostream>
using namespace std;

int main(){
  int rows, cols, i, j;
  
  cout <<"Введите количество строк ";
  cin >> rows;
  cout <<"Введите количество столбцов ";
  cin >> cols;
  cout <<"Введите элементы матрицы"<< endl;

  int matrix[rows][cols];
  
  for (i = 0; i < rows; ++i){
    for (j = 0; j < cols; ++j){
      cout <<"Введите элемент матрицы ["<< i << "] [" << j << "] ";
      cin >> matrix[i][j];
    }
  }

  cout << "Исходная матрица" << endl;
  for (i = 0; i < rows; ++i) {
    for (j = 0; j < cols; ++j){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }


  for (j = 0; j < cols; ++j) {
    for (i = rows - 1; i >= 0; --i) {
      cout << matrix [i][j];
    }
    cout << endl;
  }
}