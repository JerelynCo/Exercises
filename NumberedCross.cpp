#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "\nEnter a dimension: ";
	cin >> n;

	//Creating a table
	for(int i = 0; i < 2*n + 1; i++){
		for(int j = 0; j < 2*n + 1; j++){
			if(j == n && i <= n){ //north
				cout << (n - i)%10;
			}
			else if(i == n && j > n){ //east
				cout << j%10;
			}
			else if(j == n && i > n){ //south
				cout << (2*n+i-n)%10;
			}
			else if(i == n && j < n){ //west
				cout << (3*n+j+1)%10;
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
}
