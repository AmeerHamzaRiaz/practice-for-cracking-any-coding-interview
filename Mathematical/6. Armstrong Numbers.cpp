#include <iostream>
#include <math.h>
using namespace std;

bool isArmstrong(int n) {
	int temp = n;
	int sum = 0;
	while(temp > 0){
		int lastDigit = temp % 10;
		sum = sum + pow(lastDigit,3);
		temp = temp /10;
	}
	return (n == sum) ? true : false;
}

int main() {
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		cout << isArmstrong(n)<<endl;
	}
	return 0;
}
