#include<bits/stdc++.h>
using namespace std;

void vatsua() {
	long long res = 0;
	int n;

	cin >> n;
	int a[n];
	for(auto &x:a) {
		cin>>x;
	}
	sort(a, a+n, greater<int>());
	for(int i = 0; i< n && a[i] > i; i++) res += (a[i]-i);
	cout <<res << endl;
}

int dp[1005][1005];
void xauChuoi() {

	string x,y;
	cin >> x >> y;

	int m  = x.length();
	int n = y.length();

	for(int i = 0; i <= m; i++) dp[i][0] = i;
	for(int j = 0; j <= n; j++) dp[0][j] = j;

	for(int i = 1; i<= m; i++) {
		for(int j =1; j<= n; j++) {
			if(x[i-1] == y[j - 1]) {
				dp[i][j] =dp[i - 1][j -1];
			} else {
				dp[i][j] = min({dp[i - 1][j -1], dp[i -1][j], dp[i][j-1]}) + 1;
			}
		}
	}

	cout << dp[m][n] << endl;
}

void ghepHinh() {
	long long a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	bool ok = false;
	if ((a == c && b + d == a) ||
	        (b == d && a + c == b)
	        || (a == d && b + c == a) ||
	        (b == c && a + d == b)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

bool la_tam_giac(int a, int b, int c) {
	return (a + b > c) && (a + c > b) && (b + c > a);
}

void solveTamGiac() {
	int t;
	if (cin >> t) {
		while (t--) {
			int a[6];
			for (int i = 0; i < 6; i++) {
				cin >> a[i];
			}

			for (int i = 0; i < 4; i++) {
				for (int j = i + 1; j < 5; j++) {
					for (int k = j + 1; k < 6; k++) {

						int t1_a = a[i];
						int t1_b = a[j];
						int t1_c = a[k];

						int t2_a = -1, t2_b = -1, t2_c = -1;

						for (int x = 0; x < 6; x++) {
							if (x != i && x != j && x != k) {
								if (t2_a == -1) {
									t2_a = a[x];
								} else if (t2_b == -1) {
									t2_b = a[x];
								} else {
									t2_c = a[x];
								}
							}
						}

						if (la_tam_giac(t1_a, t1_b, t1_c) && la_tam_giac(t2_a, t2_b, t2_c)) {
							cout << "yes\n";
							return;
						}
					}
				}
			}

			cout << "no\n";
		}
	}
}

void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int down  = sqrt(n);
		int up = n - down;
		cout << up << endl;
	}
}
int main() {
	solveTamGiac();
	return 0;
}