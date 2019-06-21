#include<iostream>
using namespace std;
main ()
{
    int y;
	cout<< "enter a year : \t";
	cin>>y;
	if (y%4==0)
	cout << "the year is leap";
	else 
	cout << "the year is not a leap year";
}
