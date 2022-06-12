#include <iostream>
using namespace std;

class DataType
{
private:
    int iData;
    char cData;
    float fData;

public:
    DataType(int i, char c, float f) : iData(i), cData(c), fData(f)
    {
        cout << "DataType constructor" << endl;
    }

    void setInt(int i)
    {
        iData = i;
    }

    void setChar(char c)
    {
        cData = c;
    }

    void setFloat(float f)
    {
        fData = f;
    }

    void show() const;
};

void DataType::show() const
{
    cout << "Integer data:\t" << iData << "\tCharater data:\t" << cData << "\tFloat data:\t"
         << fData << endl;
}

int main(void)
{
    DataType d(12, 'V', 6.8);
    cout << "The origin data: " << endl;
    d.show();
    d.setChar('d');
    d.setFloat(7.2);
    d.setInt(10);
    cout << "After changed: " << endl;
    d.show();

    return 0;
}