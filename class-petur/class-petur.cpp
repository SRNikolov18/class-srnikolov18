#include <iostream>
#include <string>
using namespace std;

class Point2D
{
public:

	Point2D()
	{
		cout << "Constructor1 " << endl;
		x = 0;
		y = 0;
	}

	Point2D(float newX, float newY)
	{
		cout << "Constructor2 " << endl;
		x = 0;
		y = 0;
	}

	void toString()
	{
		cout << "x:" << x << "\n" << "y:" << y << endl;
	};

private:

	float x;
	float y;
};


int main()
{
    Point2D p1;
    Point2D* p2 = new Point2D();
	Point2D* p3 = new Point2D(4.6, 5.8);

	p1.toString();
	p2->toString();
	p3->toString();
}

