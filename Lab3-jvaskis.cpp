// Jeremiah Vaskis
// COSC 2030
// Lab 03
// 10/01/2018

#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::isinf;
using std::exit;
using std::setprecision;

// Problems 1 & 2
void sumShort(short int n) {
	if (n < 1) {
		cout << " n must be an integer greater or equal to 1 " << endl << endl;
	}
	else {
		short int sum = 0;
		short int sumBefore = 0;
		short int sumAfter = 1;
		int overflow = 0;

		for (short int i = 1; i <= n; i++) {
			sumBefore = sum;
			sum = sum + i;
			sumAfter = sum;

			// Checks if an overflow occured (numbers wrap around from + to -)
			if (sumAfter < sumBefore) {
				cout << "  OVERFLOW" << endl;
				cout << "  n = " << i << " causes an overflow" << endl << endl;
				overflow = 1;

				if (overflow == 1) {
					break;
				}
			}
		}
		cout << "  n =        " << n << endl;
		cout << "  sumShort:  " << sum << endl << endl;
	}
	return;
}

// Problem 3
void sumLong(long int n) {
	if (n < 1) {
		cout << " n must be an integer greater or equal to 1 " << endl << endl;
	}
	else {
		long int sum = 0;
		long int sumBefore = 0;
		long int sumAfter = 1;
		int overflow = 0;

		for (long int i = 1; i <= n; i++) {
			sumBefore = sum;
			sum = sum + i;
			sumAfter = sum;

			// Checks if an overflow occured (numbers wrap around from + to -)
			if (sumAfter < sumBefore) {
				cout << "  OVERFLOW" << endl;
				cout << "  n = " << i << " causes an overflow" << endl << endl;
				overflow = 1;

				if (overflow == 1) {
					break;
				}
			}
		}
		cout << "  n =        " << n << endl;
		cout << "  sumLong:   " << sum << endl << endl;
	}
	return;
}

// Problem 4
void productLong(long int n) {
	if (n < 1) {
		cout << " n must be an integer greater or equal to 1 " << endl << endl;
	}
	else {
		float prod = 1; // as this will be multiplied, this needs to be 1
		float prodBefore = 0;
		float prodAfter = 1;
		int overflow = 0;

		for (long int i = 1; i <= n; i++) {
			prodBefore = prod;
			prod = prod * i;
			prodAfter = prod;

			// Checks if an overflow occured (numbers wrap around from + to -)
			// When dealing with floats or doubles you need to also use an infinity check as inf > prodBefore
			if ((prodAfter < prodBefore) | isinf(prod)) {
				cout << "  OVERFLOW" << endl;
				cout << "  n = " << i << " causes an overflow" << endl << endl;
				overflow = 1;

				if (overflow == 1) {
					break;
				}
			}
		}
		cout << "  n =      " << n << endl;
		cout << "  productLong: " << prod << endl << endl;
	}
	return;
}

// Problem 5
void productDouble(long int n) {
	if (n < 1) {
		cout << " n must be an integer greater or equal to 1 " << endl << endl;
	}
	else {
		double prod = 1; // as this will be multiplied, this needs to be 1
		double prodBefore = 0;
		double prodAfter = 1;
		int overflow = 0;

		for (long int i = 1; i <= n; i++) {
			prodBefore = prod;
			prod = prod * i;
			prodAfter = prod;

			// Checks if an overflow occured (numbers wrap around from + to -)
			// When dealing with floats or doubles you need to also use an infinity check as inf > prodBefore
			if ((prodAfter < prodBefore) | isinf(prod)) {
				cout << "  OVERFLOW" << endl;
				cout << "  n = " << i << " causes an overflow" << endl << endl;
				overflow = 1;

				if (overflow == 1) {
					break;
				}
			}
		}
		cout << "  n =            " << n << endl;
		cout << "  productDouble: " << prod << endl << endl;
	}
	return;
}

// Problem 6
void sumFracFloat(long int n) {
	if (n < 1) {
		cout << " n must be an integer greater or equal to 1 " << endl << endl;
	}
	else {
		float N = n; // Converting n to a float value for division
		float sum = 0;
		float fraction = (1/N);
		int overflow = 0;

		for (long int i = 1; i <= n; i++) {
			sum = sum + fraction;
		}
		sum = sum - 1;

		cout << "  n =           " << N << endl;
		cout << "  1/n =         " << fraction << endl;
		cout << "  sumFracFloat: " << sum << endl << endl;
	}
	return;
}

void sumFracDouble(long int n) {
	if (n < 1) {
		cout << " n must be an integer greater or equal to 1 " << endl << endl;
	}
	else {
		double N = n; // Converting n to a float value for division
		double sum = 0;
		double fraction = (1 / N);
		int overflow = 0;

		for (long int i = 1; i <= n; i++) {
			sum = sum + fraction;
		}
		sum = sum - 1;

		cout << "  n =            " << N << endl;
		cout << "  1/n =          " << fraction << endl;
		cout << "  sumFracDouble: " << sum << endl << endl;
	}
	return;
}



int main() {

	// Problem 1 & 2
	cout << "______________________________" << endl;
	cout << "Problem 1 & 2" << endl;
	cout << "______________________________" << endl;
	sumShort(255);
	sumShort(260); 

	// Problem 3
	cout << "______________________________" << endl;
	cout << "Problem 3" << endl;
	cout << "______________________________" << endl;
	sumLong(65535);
	sumLong(65540);
	
	// Problem 4
	cout << "______________________________" << endl;
	cout << "Problem 4" << endl;
	cout << "______________________________" << endl;
	productLong(34);
	productLong(40);
	
	// Problem 5
	cout << "______________________________" << endl;
	cout << "Problem 5" << endl;
	cout << "______________________________" << endl;
	productDouble(170);
	productDouble(175);

	// Problem 6
	cout << "______________________________" << endl;
	cout << "Problem 6" << endl;
	cout << "______________________________" << endl;
	sumFracFloat(9);
	sumFracFloat(10);

	sumFracDouble(5);
	sumFracDouble(6);


	// Problem 7
	cout << "______________________________" << endl;
	cout << "Problem 7" << endl;
	cout << "______________________________" << endl;

	cout << "float loop for i going from 3.4 to < 4.4" << endl;
	for (float i = 3.4; i < 4.4; i += 0.2) {
		cout << "i = " << setprecision(10) << i << endl;
	}

	cout << endl;

	// Problem 8
	cout << "______________________________" << endl;
	cout << "Problem 8" << endl;
	cout << "______________________________" << endl;
	cout << "double loop for i going from 3.4 to < 4.4" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2) {
		cout << "i = " << setprecision(20) << i << endl;
	}

	system ("pause");
	return 0;
}