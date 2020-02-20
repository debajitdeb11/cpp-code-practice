#include <iostream>
using namespace std;

int main (){
	int n;
	int arr[2][2];
	for (int i=0; i<2; i++){
		for(int j=0; j<i; j++){
			cin >> n;
			arr[i][j]=n;
		}}
	for (int i=0; i<2; i++){
		for(int j=0; j<i; j++){
			cout << arr[i][j];
		}}

	return 0;
}
