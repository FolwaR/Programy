//============================================================================
// Name        : Klasa1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Name_pair.h"

using namespace std;

int main() {

	cout<<"Ile osob\n"
		  "> ";
	int ile;
	cin>>ile;
	vector<Name_pairs> osoba(ile);

	for(int i=0; i<osoba.size(); i++){
		osoba[i].read_name();
		osoba[i].read_age();
	}
	for(int i=0; i<osoba.size(); i++){
		osoba[i].print();
	}
return 0;
}
