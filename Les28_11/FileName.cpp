#include <iostream>
using namespace std;

//Тема: Конструктор копіювання

class Point
{
private:
	int x;
	int y;
	char* title;
	static int counterObject;
public:
	Point(int x, int y, char* title)
	{
		this->x = x;
		this->y = y;
		this->title = new char[strlen(title)+1];
		strcpy_s(this->title, strlen(title) + 1, title);
		counterObject++;
	}

	Point(const Point& p) //конструктор копіювання
	{
		this->x = p.x;
		this->y =p.y;
		this->title = new char[strlen(p.title) + 1];
		strcpy_s(this->title, strlen(p.title) + 1, p.title);
	}

	void show()
	{
		
		cout << "Info from method show(). Address: " << this << endl;
		cout << "Type this: " << typeid(this).name() << endl;
		cout << "Point. X: " << x << " Y: " << y << endl;
	}
	static int getCounterObject()
	{
		
		return counterObject;
	}
	~Point()
	{
		delete[] title;
	}
};
int Point::counterObject = 0;
int main()
{
	char name[] = { "my_point" };
	Point p1 = { 5,6 , name};
	Point p2 = p1;
	p1.show();
	p2.show();

	/*Point::getCounterObject();
	Point p1 = {5,6};
	Point p2 = {15,16};
	cout << "Address p1: " << &p1 << endl;
	p1.show();
	cout << "Address p2: " << &p2 << endl;
	p2.show();*/

	
	
}