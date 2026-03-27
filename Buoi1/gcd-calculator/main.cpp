#include <iostream>
using namespace std;

int main() {
	int a,b;
B1:
	cout<< "Nhap a = ";
	cin>>a;
	cout<< "Nhap b = ";
	cin>>b;

B2:

	if(a!=b) {
		a > b ? a-=b: b-=a;
		goto B2;
	}

B3:
	cout<< "Uoc chung lon nhat "<< a;
}