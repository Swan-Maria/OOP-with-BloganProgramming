#include <iostream>
/*
	1. ���������� ������������
	������������ � ��� ��������� ���, ����������� ���������� ������ � ������
	�� ��������� � ���� ������ ��������, ������� ���������� ������� ��� 
	����������, � �������� �� � ������� ������������� ������� private � protected.
*/

//class User
//{
//private:
//	int age;
//public:
//	void SetAge(int age)
//	{
//		if (age > 0)
//			this->age;
//	}
//};

/*
	2. ��� ����� ������������
	3. ����������� ������������
	������������ � ��� ��������� ���, ������� ��������� ��������� ����� ������ 
	�� ������ ��� ������������.
*/

/*
	4. ���������� ������������
	��������� ������������:
	class ���_���������_������ : �����������_������������ ���_�������������_������
	{
		���������� ������
	};

	��������� �����������:
	�������� -> ������������
	����������� -> �������
*/

//struct Point{};
//
//class Person{};
//
//class Vehicle
//{
//private:
//	Point position;
//	double height;
//	double length;
//	double width;
//protected:
//	double weight;
//public:
//	void Move(Point direction);
//	void Rotate(Point direction);
//	void Scale(float factor);
//};
//
//class Car : public Vehicle
//{
//private:
//	int doors;
//	int tankCapacity;
//	char model[30];
//	char mark[30];
//	bool isStarted;
//public:
//	void FillUp(int points)
//	{
//		weight += points;
//	}
//	void Start();
//};
//
//class Plane : public Vehicle
//{
//private:
//	int seets;
//	Point route[2];
//public:
//	void AuthorizePeople(const Person* peopleList);
//	void Fly();
//	void CallDispatcher(Person dispatcher);
//};

/*
	5. ����������� ������� protected (����������)

	private: ������ ���� �����
	protected: ���� � ��� �������� ������
	public: ���
*/

//class A
//{
//private:
//	int value1;
//	void Method1();
//public:
//	int value2;
//	void Method2()
//	{
//		value1 = 10;
//		Method1();
//	}
//};

/*
	6. ������������ � ������������
	- ��� ��������� ������� ����������� �� ��������� �� ��������. �� ��������� ����������� �� ��������� ������������� ������.
	- ��� �������� ������� ��������� ������ ������ ������������� ���������� ����������� ������������� ������.
	- ��� ���������� ������������ ����� ��������� ������ ������������� ���������� ����������� ����� ������������� ������.
	- ���� � �������� ������ ���������� ����������� �����, �� ������������ ����������� �� ��������� �� ����� ����������, 
	  ����� ��������� ������������� �������� ������������ �� ��������� �������� �������.
*/
#include "Array.h"
#include "MathArray.h"

class A
{
public:
	A() { std::cout << "A::A()\n"; }
	A(int a) { std::cout << "A::A(int a)\n"; }
	A(int a, int b) { std::cout << "A::A(int a, int b)\n"; }
	A(const A& oth) { std::cout << "A::A(const A& oth)\n"; }
	A(A&& oth) 	{std::cout << "A::A(A&& oth)\n";}
};

class B :public A
{
public:
	B():A() { std::cout << "B::B()\n"; }
	B(int a):A(a){ std::cout << "B::B(int a)\n"; }
	B(int a, int b):A(a,b) { std::cout << "B::B(int a, int b)\n"; }
	B(const B& oth):A(oth) { std::cout << "B::B(const B& oth)\n"; }
	B(B&& oth) :A(std::move(oth)) { std::cout << "B::B(A&& oth)\n"; }

};

class C:public B {};

int main()
{
	// 4. ���������� ������������
	/*Car car;
	Plane plane;
	//car.Move();
	//plane.Move();
	*/

	// 5. ����������� ������� protected
	/*A object;
	object.value2 = 10;
	//object.value1; // ����������
	//object.Method1; // ����������
	*/

	// 6. ������������ � ������������
	/*Array myArray(5);
	for (size_t i = 0; i < myArray.Size(); i++)
		std::cout << myArray[i]<<" ";*/
		
	/*MathArray myArray(10);
	for (size_t i = 0; i < myArray.Size(); i++)
	{
		myArray[i] = i + 1;
		std::cout << myArray[i] << " ";
	}
	std::cout << std::endl;

	int sum = myArray.Sum();
	std::cout <<"sum = "<< sum << std::endl;

	MathArray myArray2(myArray);
	for (size_t i = 0; i < myArray2.Size(); i++)
	{
		//myArray[i] = i + 1;
		std::cout << myArray2[i] << " ";
	}
	std::cout << std::endl;*/

	/*A object1;
	A object2(1);
	A object3(1, 2);
	B object(5,10);*/

	B object;
	B copyObject(std::move(object));

	return 0;
}