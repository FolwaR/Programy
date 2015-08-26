/*
 * Name_pairs.cpp
 *
 *  Created on: 26 sie 2015
 *      Author: lukasz
 */
#include "Name_pairs.h"

Name_pair::Name_pair(string n, double a):name{n},age{a} {;}

void Name_pair::read_name(){

	cout<<"Podaj imie\n"
		  "> ";
	cin>>Name_pair::name;
}

void Name_pair::read_age(){

	cout<<"Podaj wiek\n"
		  "> ";
	cin>>Name_pair::age;
}

void Name_pair::print(){

	cout<<"Imie: "<<Name_pair::name<<"\t wiek: "<<Name_pair::age<<'\n';
}






