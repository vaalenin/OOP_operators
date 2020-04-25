#pragma once

#include <iostream>

//дружественный оператор вывода в поток 
std::ostream& operator << (std::ostream& os, const Matrix& m)

//дружественная функция
void PrintMatrix (const Matrix& m);

class Matrix
{
public:
  Matrix (int v1, int v2);
  ~Matrix () = default;
  
  //бинарные операторы
  Matrix operator+ (const Matrix& m);
  //Matrix operator- (const Matrix& m);
  //Matrix operator* (const Matrix& m);
  //Matrix operator/ (const Matrix& m);
  
  //унарные операторы
  Matrix& operator ++ (int);
  //Matrix& operator -- (int);
  //Matrix& operator ++ ();
  //Matrix& operator -- ();
  
  //оператор присваивания
  Matrix& operator = (const Matrix& m);
  
  //логические операторы
  bool operator > (const Matrix& m);
  //bool operator < (const Matrix& m);
  //bool operator >= (const Matrix& m);
  //bool operator <= (const Matrix& m);
  //bool operator == (const Matrix& m);
  
  //оператор вычисления объекта как функции
  int operator () ();
  int& operator [](int index);
  
  //оператор привидения типов
  operator int ();
  
  friend std::ostream& operator << (std::ostream& os, const Matrix& dt);
  frined void PrintMatrix (const Matrix& dt);
  
private:
  int val1;
  int val2;
};
