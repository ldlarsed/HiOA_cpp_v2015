//============================================================================
// Name        : Templates.cpp
// Author      : Lukas David Larsed
// Version     :
// Copyright   : s198569
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * Ettersom det er en template behandles denne som en generic
 * type og kan da behandle forskjellige typer parametre.
 * Husk at denne tar kun en enkel parameter, det vil si at man
 * kan kun sende inn en int som parameter.
 */
template<class lukas>
lukas addStuff(lukas a, lukas b) {
	return a + b;
}

/**
 * Disse er eto datatyper men ettersom vi ikke vet hva vi skal jobbe med
 * får disse navnene First og Second. Vi trenger to ettersom det skal sendes
 * inn to forskjellige typer feks int og double som parametre til denne klassen.
 */
template<class FIRST, class SECOND>

/**
 * Nå kan v i bygge en funksjon som skal ta inn disse parametre
 * men skal ha kun en av disse som en output.
 */

FIRST smaller(FIRST a, SECOND b){
	return (a<b?a:b);
}

int main() {

	//For første eksempler
	double x = 7;
	double y = 43.3, z;
	z = addStuff(x, y);
	cout << z << endl;

	int w = 89;
	double v = 56.78;

	cout << smaller(w, v) << endl;

	return 0;
}
