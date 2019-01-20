#include <iostream>
using namespace std;

int ap_Term(int a,int b, int n) {
	return a+((n-1)*(b-a));
}

int main() {
	int T;
	cin >> T;
	while(T--){
		int a, b, n;
		cin >> a >> b >> n;
		cout << ap_Term(a,b,n) <<endl;
	}
	return 0;
}
