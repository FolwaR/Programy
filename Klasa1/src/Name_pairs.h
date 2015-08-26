/*
 * Name_pairs.h
 *
 *  Created on: 26 sie 2015
 *      Author: lukasz
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Name_pair{
public:

	Name_pair(string name={"Jan"}, double age={00});

	void read_name();
	void read_age();
	void print();

private:
	string name;
	double age;
};
