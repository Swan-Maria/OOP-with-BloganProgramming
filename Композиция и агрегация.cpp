/*� ��� ���������� ��� ������� ����������� �������������� ����� ��������. 

������������ � ��� ����� �����-��������� ����� ��� ���� � ������ ������������� 
������, �, ��� �������, ��������� �����-�� ����� ���������� ���/� ����. 
������������ ����������� ������ ����������. �������� ���������� �������� �����������. 
������ �����������, ���� �� ����� ��� �����������.

���������� � ��� ����� ���� ����� �������� � ���� ������ ����� � �������� ������ �� �����.
���������� ����������� ������ ������. ���������� ����� ���������. 
������ �����������, ��� �� �� ����� �������� ����������� ���������.

�������� ��� ������� ������ ����������: ���������� � ���������.
��������� � ���������� - ��� �������� ��������� ����� ��������.

���������� � ��� ����� ��������� �� ���������� �������� �� ����������. 
�� ��������� ��� �������� ���������� � ��������� ����������� �����������.
� �������� �������, ��������� ��������� ����� ����������� � ������������ ����������.

��������� � ��� ����� ��������� ��������� ��������� ���-�� � ������ ����� ����, 
� ���������� � ����������� ���������� � �������� ���������.

*/

#include <iostream>

// 1. ������� ���c��� � �������

//class A
//{
//private: 
//	int a;
//	int b;
//public:
//	/*A() :a(0), b(0)
//	{
//		std::cout << "A::Constructor\n";
//	}*/
//
//	A(int a, int b) :a(a), b(b)
//	{
//		std::cout << "A::Constructor(int a, int b)\n";
//	}
//};
//
//class B
//{
//private:
//	char c;
//	char d;
//	A object;
//public:
//	B() : c('c'), d('d'), object(0,0)
//	{
//		std::cout << "B::Constructor\n";
//	}
//
//	B(int a, int b) : c('c'), d('d'), object(a, b)
//	{
//		std::cout << "B::Constructor(int a, int b)\n";
//	}
//
//	B(int a, int b, char c, char d) : c(c), d(d), object(a, b)
//	{
//		std::cout << "B::Constructor(int a, int b, char c, char d)\n";
//	}
//};

class A
{
private:
	int* ptr;
public:
	A(int value) :ptr(new int(value))
	{
		std::cout << "A::Constructor(int value)\n";
	}
	~A()
	{
		delete ptr;
		ptr = nullptr;
		std::cout << "A::Destructor\n";
	}
};

class B
{
private:
	A object;
	double* ptr;
public:
	B(int value) :object(value), ptr(new double(value/10.0))
	{
		std::cout << "B::Constructor(int value)\n";
	}

	~B()
	{
		delete ptr;
		ptr = nullptr;
		std::cout << "B::Destructor\n";
	}
};

// 2. ���������� (������������� �� ��������)

class Person{};
class Window{};
class Roof{};
class House
{
private:
	//�������
	Window* windows;
	Person* people;
	Roof roof;
public:
	House(int windowCount, int peopleCount)
		:windows(new Window[windowCount]), people(new Person[peopleCount])
	{

	}
};

// 3. ��������� (������������� �� ������)

class Snake
{
public:
	Snake()
	{
		std::cout << "Snake::Constructor\n";
	}

	~Snake()
	{
		std::cout << "Snake::Destructor\n";
	}

	void Method(){}
};

class Field
{
private:
	const Snake& snake;
public:
	Field(const Snake& snake)
		:snake(snake)
	{
		std::cout << "Field::Constructor\n";
	}

	~Field()
	{
		std::cout << "Field::Destructor\n";
	}
};


int main()
{

	// 1. ������� ������� � �������

	/*B object1;
	B object2{ 3,5};
	B object3{ 3,5, '!', 'G' };*/

	{B object{ 10 };}

	// 2. ����������

	House house{ 12,3 };

	// 3. ���������

	{
		Snake snake;

		/*....���....*/

		Field* field = new Field(snake);

		/*....���....*/

		delete field;

		snake.Method();
	}

	return 0;
}