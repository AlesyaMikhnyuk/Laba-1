#include"Header.h"
#include <iostream>
#include "time.h"

using namespace std;

const unsigned int MAX_SIZE = 10;

void main() {
	srand(time(0));
	Vector arr[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; i++) {
		cout << " " << i + 1 << ". ";
		arr[i].print();
	}
	cout << "V1 = ";
	int v1, v2;
	cin >> v1;
	v1--;
	arr[v1].not();
	cout << "V2 = ";
	cin >> v2;
	v2--;
	arr[v1].kon(arr[v2]);
	arr[v1].des(arr[v2]);
	cout << arr[v1].is(arr[v2]) << "\n";
	unsigned int p;
	cout << "0 - ";
	cin >> p;
	for (int i = 0; i < MAX_SIZE; i++) {
		if (arr[i].zero() == p) {
			arr[i].print();
		}
	}
	cout << "1 - ";
	cin >> p;
	for (int i = 0; i < MAX_SIZE; i++) {
		if (arr[i].one() == p) {
			arr[i].print();
		}
	}
}