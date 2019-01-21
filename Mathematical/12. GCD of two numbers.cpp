#include <iostream>
using namespace std;

int GCDusingForLoop(int a,int b){
	int max = (a > b) ? a : b, gcd;
	for(int i=1; i <= max ; i++)
		if(a%i == 0 & b%i == 0)
			gcd = i;
	return gcd;
}

int GCDusingRecursion(int a, int b){
	if(b != 0)
		GCDusingRecursion(b,a%b);
	else
		return a;
}

int main() {
	int T;
	cin >> T;
	while(T--){
		int a,b;
		cin >> a >> b;
		cout << GCDusingRecursion(a,b) <<endl;
	}
	return 0;
}
