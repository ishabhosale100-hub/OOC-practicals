#include <iostream>
using namespace std;
class Box
{
private:
    int length;
    int breadth;
public:
    Box(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void showLength()
    {
        cout << "Length of box = " << length << endl;
    }

    void showBreadth()
    {
        cout << "Breadth of box = " << breadth << endl;
    }
    friend void showArea(Box b);
};
void showArea(Box b)
{
    cout << "Area of box = " << b.length * b.breadth << endl;
}

int main()
{
    Box b(10, 5);
    b.showLength();
    b.showBreadth();
    showArea(b);
    return 0;
}
