#include <iostream>
using namespace std;

int main() {
	int array1[10] = {};																		//array stores up to 10 values
	int array2[10] = {};																		//array stores up to 10 values
	cout << "Please enter ten integer values " << endl;
	for (int counter = 0; counter < 10; counter++) {											//stores values from user into array1
		cin >> array1[counter];
	}
	cout << "Please enter ten more integer values " << endl;									//stores values from user into array2
	for (int i = 0; i < 10; i++) {
		cin >> array2[i];
	}
	cout << "Output of array1" << endl;
	for (int o = 0; o < 10; o++) {
		cout << array1[o] << " ";
	}
	cout << endl;
	cout << "Output of array2" << endl;
	for (int o = 0; o < 10; o++) {
		cout << array2[o] << " ";
	}
	cout << endl;
	int length = 10;
	for (int i = length - 1; i > 0; i--) {														//for loop that switches values in arrays
		int first = 0;
		for (int j = 1; j <= i; j++) {
			if (array1[j] > array1[first]) {													//compares values in index then loops through to check rest of array
				first = j;
			}
		}
		int temp = array1[first];																//stores value in temp to switch
		array1[first] = array1[i];
		array1[i] = temp;
	}

	cout << "Output of array1 from smallest to largest: " << endl;
	for (int o = 0; o < 10; o++) {
		cout << array1[o] << " ";
	}
	cout << endl;

	int length2 = 10;
	for (int i = length2 - 1; i > 0; i--) {
		int first = 0;
		for (int j = 1; j <= i; j++) {
			if (array2[j] < array2[first]) {
				first = j;
			}
		}
		int temp = array2[first];
		array2[first] = array2[i];
		array2[i] = temp;
	}
	cout << "Output of array2 from largest to smallest: " << endl;
	for (int o = 0; o < 10; o++) {
		cout << array2[o] << " ";
	}
	cout << endl;
	int sum = 0;
	int average;
	for (int a = 0; a < 10; a++) {
		sum+=array1[a];																	//adds values in array and stores them in variable sum
	}
	average = sum / 10;
	cout << "The average of array1 is: " << average << endl;
	int max = array1[0];
	int min = array1[0];
	for (int a = 1; a < 10; a++) {
		if (max < array1[a]) {															//swtiches values in array to find max
			max = array1[a];
		}
		if (min > array1[a]) {															//switches values in array to find min
			min = array1[a];	
		}
	}
	cout << "The max of array1 is: " << max << endl;
	cout << "The min of array1 is: " << min << endl;
	
	int sum2 = 0;
	int average2;
	for (int a = 0; a < 10; a++) {
		sum2 += array2[a];
	}
	average2 = sum2 / 10;
	cout << "The average of array2 is: " << average << endl;
	int max = array2[0];
	int min = array2[0];
	for (int a = 1; a < 10; a++) {
		if (max < array2[a]) {
			max = array2[a];
		}
		if (min > array2[a]) {
			min = array2[a];
		}
	}
	cout << "The max of array2 is: " << max << endl;
	cout << "The min of array2 is: " << min << endl;
	return 0;
}