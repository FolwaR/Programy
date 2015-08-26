//============================================================================
// Name        : Klasa1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Name_pairs.h"


int main() {

	cout<<"Ile osob: ";
	int ile;
	cin>>ile;
	vector<Name_pair> osoba(ile);

	for(int i=0; i<osoba.size(); i++){
		osoba[i].read_name();
		osoba[i].read_age();
	}

	for(int i=0; i<osoba.size(); ++i){
			osoba[i].print();
	}

	return 0;
}
