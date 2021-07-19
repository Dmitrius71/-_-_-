#include <iostream>
#include <string>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point()  //Конструктор 
	{
		x = 0;
		y = 0;
		cout << this << "constructor" << '\n';
	 }

	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << "constructor" << "\n";
	}

	void SetX(int x)         // Сеттер х
	{
		this->x = x;
	}
	  
	void SetY(int y)           // Сеттер у
	{
		this->y = y;
	}

	int GetX()               // Геттер х
	{
		return this->x;
	}

	int GetY()                // Геттер у
	{
		return this->y;
	}

	bool operator == (const Point & pother)                           //передаём  объект в
	{
		if (this->x == pother.x && this->y == pother.y)               // сравниваем этот объект  и прердаваемый объект
		{
			return true;
		}
		else
		return false;
	}
};

class Human
{

public:
	int age;
	int weidht;
	string name;

	void Print()
	{
		cout << "Name" << name << "\nage" << age << "\nWeight" << weidht;
	}

};

int main()
{
	Point a(5, 1), b(9, 4);

	bool result = a == b;

	cout << result;

	return 0;
}