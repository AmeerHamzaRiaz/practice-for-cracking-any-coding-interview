#include <iostream>
using namespace std;

bool isPalindrome(int);

void sumOfDigits(int n) {
	int temp = n, sum =0;
	while(temp > 0){
		int lastDigit = temp % 10;
		sum += lastDigit;
		temp = temp / 10;
	}
	int cond = isPalindrome(sum);
	if(cond) cout << "YES" <<endl;
	else cout << "NO" <<endl;
}

bool isPalindrome(int n){
	int temp = n, rev = 0;
	while(temp > 0){
		int lastDigit = temp % 10;
		rev = rev * 10 + lastDigit;
		temp = temp / 10;
	}
	return (rev == n) ? true : false;
}
int main() {
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		sumOfDigits(n);		   
	}
	return 0;
}
