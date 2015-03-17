//============================================================================
// Name        : Copy.cpp
// Author      : Lukas Larsed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Line{
public:
	int getLength(void);
	Line(int len); //Standard konstruktør
	Line(const Line &obj); //Dette er en copy konstruktør. Tar imot et objekt.
	~Line();

private:
	int *ptr;
};

/*
 * Her kommer noen memberfunksjoner som hører til klassen Line.
 * Kode for konstrktør og andre tilhørende funkjsoner.
 */

Line::Line(int len){
	cout << "Dette er utskrift fra normal konstruktør som allokerer ptr"<< endl;
	ptr=new int;
	*ptr=len;
}

//Kode for copy kontruktør
Line::Line(const Line &obj){
	cout << "Copy konstruktør som allokerer ptr" << endl;
	ptr = new int;
	*ptr = *obj.ptr; //Her tar vi og bare kopierer den verdi som er tilgjenegelig i den klasse som tas imot som en parameter.
}

//Må fikse destruktør også
Line::~Line(void){
	cout << "Frigjør minne" << endl;
	delete ptr;
}

int Line::getLength(void){
	return *ptr;
}

void display(Line &obj){
	cout << "Length of line: " << obj.getLength() << endl;
}

int main() {

	Line line1(10); //Her blir den vanlige konstruktøren kalt opp som initialiserer lengde verdi
	Line line2 = line1; //Her blir det automatisk kalt opp copy konstruktør

	display(line1);
	display(line2);

	return 0;

}
