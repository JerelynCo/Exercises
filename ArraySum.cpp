#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int ArrSize, targetNum;
	int sum = 0;
	bool matched;
	cout << "\nEnter an array dimension: ";
	cin >> ArrSize;


	int array[ArrSize];
	//int arrayCopy[ArrSize];

	for(int i = 0; i < ArrSize; i++){
		cout << "Enter integer " << i << ": ";
		cin >> array[i];
	}

	cout << "\nEnter target number to test: ";
	cin >> targetNum;

	for(int i = 0; i < pow(2, ArrSize); i++){
		for(int j = 0; j < ArrSize; j++){
			for(int k = 0; k < ArrSize; k++){
				if( i % int(pow(2, k)) == 0 && j == k){ array[j] = -1 * array[j];}
			}
			cout << array[j];
			sum += array[j];		
		}
		if(sum == targetNum){
			cout << "Target Number matched.\n";
			break;
		}
		cout << " SUM:" << sum << endl;
		sum = 0;
	}
}