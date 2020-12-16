#include <iostream>
#include <cmath>
using namespace std;

int main()
{   

	int n;
	cin >> n;

	int array[n];

	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	
	cout << "Array elements: " << endl;	
	for(int i = 0 ; i < n; i++){
		cout  << array[i] << " ";
	}
	
	cout << endl << "Sums: " << endl;
	
	for(int i = 0 ; i < n; i++){
		for(int j = 1; j < n; j++){	
			for(int k = 0; k < n; k++){
				if(array[i] + array[j] == array[k] && i < j){
					cout << array[i] << " + " << array[j] << " = " << array[k] << endl;
				}	
			}
			
			
		}
		
	}
	
	
	return 0;
}
