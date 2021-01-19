/**
 * Author: Matt Kreul
 * Created: 2020-01-18
 *
 * This is a program that prints out the first 100 numbers which are divisible by 3 (Fizz) and 5 (Buzz).
 */

#include <iostream>
#include <vector>

using namespace std;

//vector<int> fizzbuzz(){
//	int numFound = 0;
//	int iter = 1;
//	vector<int> toRet;
//	while (numFound < 100){
//		if(iter%3 == 0){
//			cout << "Fizz! (" << iter << "), ";
//			toRet.push_back(iter);
//			numFound++;
//		}
//		else if(iter%5 == 0){
//			cout << "Buzz! (" << iter << "), ";
//			toRet.push_back(iter);
//			numFound++;
//		}
//		else{
//			cout << iter << ", ";
//		}
//		if(iter%10 == 0){
//			cout << endl;
//		}
//		iter++;
//	}
//	cout << endl;
//	return toRet;
//}


int main() {
//	vector<int> vecOfNum = fizzbuzz();
	int numFound = 0;
	int iter = 1;
//	vector<int> toRet;
	cout << "FizzBuzz Start!" << endl;
	while (numFound < 100){
		if(iter%3 == 0){
			cout << "Fizz! (" << iter << "), ";
//			toRet.push_back(iter);
			numFound++;
		}
		else if(iter%5 == 0){
			cout << "Buzz! (" << iter << "), ";
//			toRet.push_back(iter);
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
	cout << "Thank you! Goodbye..." << endl;
	return 0;
}
