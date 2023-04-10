#include <iostream>
using namespace std;
int main() {
	int t, n, i, k;
	cin >> t;
	while (t--) {
		cin >> n;
		int* a = new int[n * n];
		for (i = 0; i < n; i++) {
			for (k = 0; k < n; k++) {
				cin >> a[i * n + k];
			}
		}
		int count = 0;
		for (i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				for (k = i; k < n; k++) {
					for (int l = 0; l < n; l++) {
						if (a[i * n + j] > a[k * n + l]) {
							count++;
						}
					}
				}
			}
		}
		cout << count;
		cout << endl;
	}
	return 0;
}
