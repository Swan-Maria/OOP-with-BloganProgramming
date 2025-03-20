#include <iostream>
/*
	1. Згадуємо інкапсуляцію
	Інкапсуляція - це концепція ООП, яка дозволяє об'єднувати дані та методи
	їх обробки в одну єдину сутність, яка називається класом або структурою,
	і захищати їх за допомогою модифікаторів доступу private і protected.
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
	2. Що таке наслідування
	3. Визначення наслідування
	Наслідування - це концепція ООП, яка дозволяє створювати нові класи на основі вже
	існуючих.
*/

/*
	4. Реалізація наслідування
	Синтаксис наслідування:
	class Ім'я_Дочірнього_Класу : Модифікатор_Наслідування Ім'я_Батьківського_Класу
	{
		Реалізація Класу
	};

	Залежності:
	Дочірній -> Батьківський
	Похідний -> Базовий
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