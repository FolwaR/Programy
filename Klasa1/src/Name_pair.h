#include <iostream>
using namespace std;

class Name_pairs{
 public:
	Name_pairs(string name="Jan", double age=0);
	void read_name();
	void read_age();
	void print();
 private:
	string name;
	double age;
};
