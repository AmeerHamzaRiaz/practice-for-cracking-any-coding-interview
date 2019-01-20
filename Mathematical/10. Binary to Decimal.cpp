#include <iostream>
#include <math.h>
using namespace std;

int binToDec(string bin){
	unsigned long long dec = 0;
	for(int i=bin.length()-1; i >= 0 ; i-- ){
		if(bin[i] != '0'){
			dec = dec + pow(2,(bin.length()-1)-i);
		}
	}
	return dec;
}

int main() {
	int T;
	cin >> T;
	while(T--){
		string bin;
		cin >> bin;
		cout << binToDec(bin) <<endl;
	}
	return 0;
}
