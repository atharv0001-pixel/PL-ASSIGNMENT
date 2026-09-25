#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    int Area(int L,int B)
    {
        int area=L*B;
        return area;
    }
    int Perimeter(int X, int Y);
};
int Rectangle::Perimeter(int X,int Y)
{
    int peri=2*(X+Y);
    return peri;
}
int main()
{
    Rectangle R1;
    cout<<"Area of rectangle:"<<R1.Area(2,3)<<endl;
    cout<<"Perimeter of rectangle:"<<R1.Perimeter(2,3)<<endl;
    return 0;

}