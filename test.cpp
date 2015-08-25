#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout<<"Ile liczb calkowitych bedziesz wpisywal? \nile >";
	int ile = 0;
	cin>>ile;
	int ile_petli = 0;
	vector<int> vec;
	
	cout<<"Wpisz liczby (| zeby zakonczyc)\n>";
	
	for(int liczba; cin>>liczba;)
	{
	    ile_petli++;
	    if((ile_petli==ile)||(liczba==int('|'))) break;
	    vec.push_back(liczba);
	}
	for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
	
return 0;
}
