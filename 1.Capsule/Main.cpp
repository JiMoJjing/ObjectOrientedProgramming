#include <iostream>

class Rectangle
{
public:
	Rectangle(float x, float y)
		:x(x), y(y)
	{
	}

	float GetArea()
	{
		return x * y;
	}

	float GetSize()
	{
		return x * 2 + y * 2;
	}


private:
	float x = 1.f;
	float y = 1.f;
};

class Circle
{
public:
	Circle(float halfRadius)
		: halfRadius(halfRadius)
	{
	}

	float GetArea()
	{
		return halfRadius * halfRadius * 3.14f;
	}

	float GetSize()
	{
		return halfRadius * 2 * 3.14f;
	}

private:
	float halfRadius = 1.f;
};

int main()
{
	Rectangle rectangle = Rectangle(3.f, 4.f);    // ����, ���� ���� ����.
	std::cout << "����: " << rectangle.GetArea() << "\n";
	std::cout << "�ѷ�: " << rectangle.GetSize() << "\n";

	Circle circle = Circle(5.f);                 // ���� ������ ����.
	std::cout << "����: " << circle.GetArea() << "\n";
	std::cout << "�ѷ�: " << circle.GetSize() << "\n";
}