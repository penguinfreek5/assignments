#include <iostream>;// by Bree intro to computer science 802
#include <cmath>// includes maths functions
#include "Source.h"

using namespace std; //
int main()
{
	std::basic_istream<char>;
	std::char_traits<char>;
	int numerator{};
	int denominator{};
	int num1{}, num2{}, d1, d2, result_num, result_dom;
	char slash, op;
	cout << " s=sum, p=product, d=difference, q=quotient " << endl;
	cout << " Enter first fraction: " << endl;
	cin >> num1 >> slash >> d1;

	cout << " Enter operator: (+, -, *, /, s, p, q, d)" << endl;
	cin >> op;

	cout << " Enter second fraction: " << endl;
	cin >> num2 >> slash >> d2;


	long result{};
	if (op == '+') {
		result_num = num1 + num2;
		result_dom = d1 + d2;
		cout << result_num << slash << result_dom;
	}
	else if (op == 's') {
		result_num = (num1 * d2) + (num2 * d1);
		result_dom = (d1 * d2);
		cout << result_num << slash << result_dom;
	}
	else if (op == 'p') {
		result_num = num1 * num2;
		result_dom = d1 * d2;
		cout << result_num << slash << result_dom;
	}
	else if (op == 'd') {
		result_num = (num1 * d2) - (num2 * d1);
		result_dom = d1 * d2;
		cout << result_num << slash << result_dom;
	}
	else if (op == 'q') {
		result_num = num1 * d2;
		result_dom = d1 * num2;
		cout << result_num << slash << result_dom;
	}
	else if (op == '-') {
		result_num = num1 - num2;
		result_dom = d1 - d2;
		cout << result_num << slash << result_dom;
	}
	else if (op == '/') {
		result_num = num1 / num2;
		result_dom = d1 / d2;
		cout << result_num << slash << result_dom;
	}
	else if (op == '*') {
		result_num = num1 * num2;
		result_dom = d1 * d2;
		cout << result_num << slash << result_dom;
	}
	else if (denominator == 0) {
		cout << " Invalid denominator ";
	}
	else {
		cout << " Invalid Operator ";
	}
	cout << result;

	
	system("pause");//
	return 0;
}