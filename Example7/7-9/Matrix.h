#ifndef _MATRIX_H
#define _MATRIX_H

class Matrix
{
  public:
    Matrix(int size = 2);
    ~Matrix();
    void setMatrix(const double *values); // 矩阵赋初值
    void printMatrix() const;             // 显示矩阵
    int getSize() const
    {
        return size;
    }
    double &element(int i, int j)
    {
        return elements[i * size + j];
    }
    double element(int i, int j) const
    {
        return elements[i * size + j];
    }

  private:
    int size;
    double *elements;
};

#endif