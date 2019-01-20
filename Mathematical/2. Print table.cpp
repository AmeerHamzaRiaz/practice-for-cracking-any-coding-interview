#include <iostream>
using namespace std;

void printTable(int N) {
	for(int i=1; i<=10 ;i++){
		cout << N*i;
		if(i!=10)
			cout << " ";
		else
			cout << endl;
	}
}

int main() {
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		printTable(N);
	}
	return 0;
}

