#include <iostream>

using namespace std;

bool checkIfOdd(int dim);
void generateHourGlass(int dim);

int main(){
	int n;
	char tryAgain;

	cout << "\nEnter an odd number: ";
	cin >> n;

	if(checkIfOdd(n)){
		generateHourGlass(n);
	}
	else{
		cout << "\nThe entered value should be an odd number.";
	}
}

bool checkIfOdd(int dim){
	if(dim%2 == 1){
		return true;
	}
	return false;
}

void generateHourGlass(int dim){
	int mid;
	mid = dim/2 + 1; //Middle row number

	for(int i = 0; i < dim; i++){
		if(i < mid){ //upper half of the hourglass
			for(int j = 0; j < i; j++){ //incrementing space number
				cout << " ";
			}
			for(int j = 0; j < dim - i; j++){ //decrementing asterisk number
				cout << "* ";				
			}
		}
		else{ //lower half of the hourglass
			for(int j = 0; j < dim - i - 1 ; j++){ //decrementing space number
				cout << " ";
			}
			for(int j = 0; j <= i; j++){ //incrementing asterisk number
				cout << "* ";
			}
		}
		cout << endl;
	}
}