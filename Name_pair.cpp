#include "Name_pair.h"


Name_pairs::Name_pairs(string n, double a):name{n}, age{a} {;}


void Name_pairs::read_name(){
	cout<<"Podaj imie: ";
	cin>>Name_pairs::name;
}

void Name_pairs::read_age(){
	cout<<"Podaj wiek: ";
	cin>>Name_pairs::age;
}

void Name_pairs::print(){
	cout<<"Imie: "<<name<<", wiek: "<<age<<'\n';
}
