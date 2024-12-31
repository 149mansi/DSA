#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n) {
	vector<bool> prime(n,true);
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {// true ke jag pe false tha
			for (int i = p * p; i <= n; i += p)
				prime[i] =false;// false ke jag pe true tha
		}
	}

	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}

int main() {
	int n = 50;
	SieveOfEratosthenes(n);
	return 0;
}