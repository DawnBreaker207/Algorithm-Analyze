#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	int s[n+5];
	fill(s+2, s+n+1, true);

	for(int i = 2; i<=n; i++)
		if(s[i]) {
			cout<<i<<" ";
			for(int j=i*i; i<=n; j+=i) s[j]=0;
		}
}