#include <iostream>
using namespace std;

int reverseDigits(int n){
	int temp = n, rev = 0;
	while(temp > 0){
		int lastDigit = temp % 10;
		rev = rev * 10 + lastDigit;
		temp = temp / 10;
	}
	return rev;
}
int main() {
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		cout << reverseDigits(n) <<endl;		   
	}
	return 0;
}
