#include "Matrix.h"

Matrix::Matrix(int v1, int v2) :
  val1 (v1), val2 (v2)
{
}

Matrix Matrix::operator+ (const Matrix& m)
{
  int tmpVal1 = this->val1;
  tmpVal1 += m.val1;
  
  int tmpVal2 = this->val2;
  tmpVal2 += m.val2;
  
  return Matrix (tmpVal1, tmpVal2);
}

Matrix& operator ++ (int)
{
  ++this->val1;
  ++this->val2;
  
  return *this;
}

Matrix& Matrix::operator = (const Matrix& m)
{
  this->val1 = m.val1;
  this->val2 = m.val2;
  
  return *this;
}

bool Matrix::operator > (const Matrix& m)
{
  return (this->val1 + this->val2) > (m.val1 + m.val2);
}

int Matrix::operator () ()
{
  return this->val1 * this->val2;
}

int& Matrix::operator [](int index)
{
  if (index == 0)
    return tis->val1;
  else if (index == 1)
    return this->val2;
}

operator int ()
{
  return this->val1 + this->val2;
}

std::ostream& operator << (std::ostream& os, const Matrix& m)
{
    os << "This is Matrix values: val1 = " << m.val1 << ", val2 = " << m.val2 << std::endl;
    return os;
}
