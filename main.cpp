#include <iostream>
using namespace std;

int main(){
		char oper;
		double n1, n2;
		cout << "Enter the operator (+,-,*,/):";
		cin >> oper;
		cout << "Enter any two number: ";
		cin >> n1 >> n2;

		switch (oper){
			case '+':
			cout << n1 << "+" << n2 << "=" << n1 +n2;
			break;

			case '-':
			cout << n1 << "-" << n2 << "=" << n1-n2;
			break;

			case '*':
			cout << n1 << "*" << n2 << "=" << n1*n2;
			break;

			case '/':
			cout << n1 << "/" << n2 << "=" << n1/n2;
			break;
			default:
			cout << " The entered operator is not valid.";
		}



	return 0;
}