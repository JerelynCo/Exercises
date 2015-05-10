#include <iostream>
#include <vector>
#include <algorithm> //for find algo

using namespace std;

int main(){
	int n, prod;
	cout << "\nEnter an array dimension: ";
	cin >> n;

	int array[n];
	vector<int> matchVector;

	for(int i = 0; i < n; i++){
		cout << "Enter integer " << i << ": ";
		cin >> array[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j){
				prod = array[i] * array[j];
				for(int k = 0; k < n; k++){
					if(k != i && k != j && prod == array[k]){
						if(find(matchVector.begin(), matchVector.end(), prod) == matchVector.end()){
							matchVector.push_back(prod);
						}	
					}
				}
			}	
		}
	}
	for(int i = 0; i < matchVector.size(); i++){
		cout << "Matched:" << matchVector.at(i) << endl;
	}
}