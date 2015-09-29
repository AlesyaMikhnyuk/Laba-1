#include"Header.h"
#include<iostream>
using namespace std ;

Vector::Vector() //обращение к конструктору 
{
	size = rand() % 16 + 1; //числа от 1 до 15
	Vect = new bool[size];
	for (int i = 0; i < size; i++)
	{
		Vect[i] = (bool)(rand() % 2);
	}
}
Vector::Vector(int size_) { // с параметрами
	size = size_;
	Vect = new bool[size];
	for (int i = 0; i < size; i++)
	{
		Vect[i] = (bool)(rand() % 2);
	}
}
Vector::~Vector() {
}
int Vector::GetSize() {
	return size; 
}
bool Vector::GetVect(int index) { //проверяем число
	if (index < 0 || index >= size) {
		return 0;
	}
	else {
		return Vect[index];
	}
}
void Vector::SetSize(int size_) { //получаем размер, инициализируем его
	delete[]Vect;
	Vect = new bool[size_];
	size = size_;
}
void Vector::SetVect(int index, bool value) { //изменяет число
	if (index < 0 || index >= size) {
		return;
	}
	else {
		Vect[index] = value;
	}
}
void Vector::print() {
	cout << "[";
	for (int i = 0; i < size; i++) {
		cout << Vect[i];
	}
	cout << "]\n";
}
int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
void Vector::kon(Vector  v2) {
	int m1 = GetSize(), m2 = v2.GetSize(), k = max(m1, m2);
	Vector temp(k);
	for (int i = k - 1; i >= 0; i--) {
		m1--;
		m2--;
		temp.SetVect(i, GetVect(m1) & v2.GetVect(m2));
	}
	temp.print();
}
void Vector::des(Vector  v2) {
	int m1 = GetSize(), m2 = v2.GetSize(), k = max(m1, m2);
	Vector temp(k);
	for (int i = k - 1; i >= 0; i--) {
		m1--;
		m2--;
		temp.SetVect(i, GetVect(m1) | v2.GetVect(m2));
	}
	temp.print();
}
void Vector::not() {
	Vector temp(size);
	for (int i = 0; i < size; i++) {
		temp.SetVect(i, !GetVect(i));
	}
	temp.print();
}
unsigned int Vector::one() {
	unsigned int x1 = 0;
	for (int i = 0; i < size; i++) {
		if (GetVect(i) == 1) {
			x1++;
		}
	}
	return x1;
}
unsigned int Vector::zero() {
	unsigned int x1 = 0;
	for (int i = 0; i < size; i++) {
		if (GetVect(i) == 0) {
			x1++;
		}
	}
	return x1;
}
bool Vector::is(Vector v2) {
	if (size != v2.GetSize()) {
		return 0;
	}
	else {
		bool b = 1;
		for (int i = 0; i < size; i++) {
			if (GetVect(i) != v2.GetVect(i)) {
				b = 0;
			}
		}
		return b;

	}
}
