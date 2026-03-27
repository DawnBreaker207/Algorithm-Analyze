#include <iostream>
using namespace std;

int main() {
	char x[10000];
	int F[150]= {};

	scanf("%s",x);

	for(char *p=x; *p!=0; p++) F[*p]++;

	for(char *p=x,c='a'; c<='z'; c++) {
		while(F[c]--) *p++=c;
	}
	printf("%s",x);

}

