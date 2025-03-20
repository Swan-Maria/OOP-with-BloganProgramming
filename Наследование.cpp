#include <iostream>
/*
	1. Вспоминаем инкапсуляцию
	Инкапсуляция – это концепция ООП, позволяющая объединять данные и методы
	их обработки в одну единую сущность, которая называется классом или 
	структурой, и защищать их с помощью модификаторов доступа private и protected.
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
	2. Что такое наследование
	3. Определение наследования
	Наследование – это концепция ООП, которая позволяет создавать новые классы 
	на основе уже существующих.
*/

/*
	4. Реализация наследования
	Синтаксис наследования:
	class Имя_Дочернего_Класса : Модификатор_Наследования Имя_Родительского_Класса
	{
		Реализация Класса
	};

	Классовые зависимости:
	Дочерний -> Родительский
	Производный -> Базовый
*/

struct Point{};

class Person{};

class Vehicle
{
private:
	Point position;
	double height;
	double length;
	double width;
	double weight;
public:
	void Move(Point direction);
	void Rotate(Point direction);
	void Scale(float factor);
};

class Car : public Vehicle
{
private:
	int doors;
	int tankCapacity;
	char model[30];
	char mark[30];
	bool isStarted;
public:
	void FillUp(int points);
	void Start();
};

class Plane : public Vehicle
{
private:
	int seets;
	Point route[2];
public:
	void AuthorizePeople(const Person* peopleList);
	void Fly();
	void CallDispatcher(Person dispatcher);
};

int main()
{
	Car car;
	Plane plane;
	//car.Move();
	//plane.Move();
	return 0;
}