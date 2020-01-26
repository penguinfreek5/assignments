#include <iostream>; // by Bree for Intro to Co Sci 802 winter 2020
#include <cmath>;

using namespace std;
int main()
{
	std::basic_istream<char>;
	std::char_traits<char>;

	int numerator{};
	int denominator{};
	int n1{}, n2{}, d1{}, d2{}, result_n{}, result_d{}, sum_result{}, pro_result{}, diff_result{}, quo_result{}, result{};
	char slash, op;
	cout << " Enter two fractions " << endl;
	
	cin >> n1 >> slash >> d1;
	cin >> n2 >> slash >> d2;


	(sum_result = result_n << slash << result_d);
	result_n = (n1 * d2) + (n2 * d1);
	result_d = (d1 * d2);
	cout << "\n Sum: " << result_n << slash << result_d;
	

	(diff_result = result_n << slash << result_d);
	result_n = (n1 * d2) - (n2 * d1);
	result_d = (d1 * d2);
	cout << "\n Difference: " << result_n << slash << result_d;


	(pro_result = result_n << slash << result_d);
	result_n = (n1 * n2);
	result_d = (d1 * d2);
	cout << "\n Product: " << result_n << slash << result_d;
	

	(quo_result = result_n << slash << result_d);
	result_n = (n1 * d2);
	result_d = (d1 * n2);
	cout << "\n Quotient: " << result_n << slash << result_d << endl;
	


	
	system("pause");
	return 0;

}