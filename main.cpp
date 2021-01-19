/**
 * Author: Matt Kreul
 * Created: 2020-01-18
 *
 * This is a program that prints out the first 100 numbers which are divisible by 3 (Fizz) and 5 (Buzz).
 */

#include <iostream>

using namespace std;

int main() {
	int numFound = 0, numFizz = 0, numBuzz = 0;
	int iter = 1;
	cout << "FizzBuzz Start!" << endl;
	while (numFound < 100){
		if(iter%3 == 0){
			cout << "Fizz! (" << iter << "), ";
			numFizz++;
			numFound++;
		}
		else if(iter%5 == 0){
			cout << "Buzz! (" << iter << "), ";
			numBuzz++;
			numFound++;
		}
		else{
			cout << iter << ", ";
		}
		if(iter%10 == 0){
			cout << endl;
		}
		iter++;
	}
	cout << endl;
	cout << "Thank you! " << endl;
	cout << "Totals: " << endl;
	cout << "\tFizz: " << numFizz << endl;
	cout << "\tBuzz: " << numBuzz << endl;
	cout << "Goodbye..." << endl;
	return 0;
}
