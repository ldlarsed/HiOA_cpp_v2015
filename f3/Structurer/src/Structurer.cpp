//============================================================================
// Name        : Structurer.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct student {
	string navn;
	int alder;

};

void print_student(student s);

struct student_container {
	student studentarray[100];
};

student_container create_students(int n) {

	student_container studenter;
	for (int i = 0; i < n; i++) {

		studenter.studentarray[i].navn = "Navn " + to_string(i);
		studenter.studentarray[i].alder = i;
	}
	return studenter;
}

student_container* create_students(int n){
	student_container studenter;

		for (int i = 0; i < n; i++) {
			studenter.studentarray[i].navn = "Navn " + to_string(i);
			studenter.studentarray[i].alder = i;
		}
		return *studenter;
}

void lagStudenter() {
	int size = 100;
	student_container s = create_students(size);
	for (int i = 0; i < size; i++) {
		print_student(s.studentarray[i]);
	}
}

void print_student(student s) {
	cout << "Student: " << s.navn << endl;
	cout << "Alder: " << s.alder;
	cout << endl;
}



int main() {

//	student *test = new student;
//	test.alder = 10;
//	test.navn = "Lukas";
//
//	student test2 = {"Lukas", 20};
//
//	print_student(test);
//	print_student(test2);

	lagStudenter();

	return 0;
}
