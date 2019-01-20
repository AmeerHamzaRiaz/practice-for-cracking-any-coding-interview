#include <iostream>
using namespace std;

unsigned long long power(int,int);

int getKthDigit(int A,int B, int K){
	unsigned long long res = power(A,B);
	unsigned long long temp = res;
	int count = 0, num = 0;
	while(temp > 0){
		int lastDigit = temp % 10;
		temp = temp/10;
		count++;
		if(count == K){
			num = lastDigit;
			break;
		}
	}
	return num;
}

unsigned long long power(int A, int B){
	unsigned long long prod = A;
	for(int i = 1; i < B; i++)
		prod = prod * A;
	return prod;
}

int main() {
	int T;
	cin >> T;
	while(T--){
		int A,B,K;
		cin >> A >> B >> K;
		cout << getKthDigit(A,B,K) << endl;
	}
	return 0;
}
