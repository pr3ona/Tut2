
#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{

// user input values

	int nu1, nu2, de1, de2;
	cout << "enter the first numerator:" << endl;
	cin >> nu1;

	cout << "enter the first denominator:" << endl;
	cin >> de1;

	cout << "enter the secone numerator:" << endl;
	cin >> nu2;

	cout << "enter the second denominator:" << endl;
	cin >> de2;



	fraction fraction1(nu1, nu2, de1, de2);// creating an object 
	
	//calling each function adn displaying them
	cout << "the sum of the fractions are :"<<fraction1.add()<<endl;
	cout << "the difference of the fractions are :"<<fraction1.sub() << endl;
	cout << "the multiplication of the fractions are :" << fraction1.multiply() << endl;
	cout << "the division of the fractions are :" << fraction1.divide() << endl;

	system("pause");
};
