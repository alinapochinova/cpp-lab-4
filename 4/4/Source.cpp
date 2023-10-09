#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if ((n * (n + 1)) % 4 != 0){
		cout << "NO";
	}
	else if (n % 4 == 0) {
		cout << "YES" << endl << n / 2 << endl;
		for (int i = 1; i <= (n - i + 1); i+=2) {
			cout << i << " " << n - i + 1<< " ";
		}
		cout << endl << n / 2 << endl;
		for (int i = 2; i <= (n - i + 1); i += 2) {
			cout << i << " " << n - i + 1<< " ";
		}
	}
	else if ((n + 1) % 4 == 0) {
		cout << "YES" << endl << n / 2 + 1 << endl;
		for (int i = 1;  i <= n - i; i += 2) {
			cout << i << " " << n - i<< " ";
		}
		cout << endl << n / 2  << endl;
		for (int i = 2; i <= n - i; i += 2) {
			cout << i << " " << n - i << " ";
		}
		cout << n;
	}
	return 0;
}