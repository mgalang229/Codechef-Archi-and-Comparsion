#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, n;
	cin >> a >> b >> n;
	if(a==b)
		cout << 0;
	else if(n%2==0) {
		if(abs(a)==abs(b))
			cout << 0;
		else
			cout << (abs(a)>abs(b)?1:2);
	} else
		cout << (a>b?1:2);
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
