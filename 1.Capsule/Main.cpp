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
	Rectangle rectangle = Rectangle(3.f, 4.f);    // 가로, 세로 길이 전달.
	std::cout << "면적: " << rectangle.GetArea() << "\n";
	std::cout << "둘레: " << rectangle.GetSize() << "\n";

	Circle circle = Circle(5.f);                 // 원의 반지름 전달.
	std::cout << "면적: " << circle.GetArea() << "\n";
	std::cout << "둘레: " << circle.GetSize() << "\n";
}