#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int a ,int b)
	{
	
		x = a;
		y = b;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "修改后的坐标值为：" << "(" << x << "," << y << ")";
	}
};
int main()
{
	Point c(60,80);
	c.setPoint(20,80);
	c.display();
}