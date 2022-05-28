#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Point.h"

class Rectanle : public Point // 派生类定义部分
{
  public:
    void initRectangle(float x, float y, float w, float h)
    {
        initPoint(x, y);
        this->w = w;
        this->h = h;
    }
    float getH() const
    {
        return h;
    }
    float getW() const
    {
        return w;
    }

  private: // 新增私有数据成员
    float w, h;
};

#endif