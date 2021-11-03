#include <iostream>

class Point
{
private:
    int pos_x;
    int pos_y;

public:
    void set_x(int x)
    {
        this->pos_x = x;
    }
    int get_x()
    {
        return this->pos_x;
    }
    void set_y(int y)
    {
        this->pos_y = y;
    }
    int get_y()
    {
        return this->pos_y;
    }
};


int main()
{
    Point *p1 = new Point();

    p1->set_x(1);
    p1->set_y(3);

    std::cout << "X = " << p1->get_x() << "\nY = " << p1->get_y() << "\n";

    return 0;
}