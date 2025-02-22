#include <iostream>
using namespace std;
int main() {
	int A,B,X,N;
	cin >> A>> B;
	X=A%B;
	N=B%A;
	if(X==0) {
		cout << "Multiples";
	}
	else if(N==0) {
		cout <<"Multiples";
	}
	else {
		cout << "No Multiples";
	}
	return 0;
}