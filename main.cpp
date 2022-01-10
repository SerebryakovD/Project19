#include<iostream>

using namespace std;

int main() {
	for (int i = 179; i < 219; i++) {
		cout << "symbol # " << i << " = " << (char)i << endl << endl;
	}

	cout << (char)201;
	for (int i = 0; i < 63; i++) {
		cout << (char)205;
	}
	cout << (char)187;
	cout << endl;
	cout << endl;
	cout << (char)186 << "\t\t\tVremena goda\t\t\t\t" << (char)186;
	cout << endl;
	cout << endl;
	cout << (char)204;
	for (int i = 0; i < 63; i++) {
		if (i != 0 && i % 16 == 0) {
			cout << char(203);
		}
		else {
			cout << (char)205;
		}
	}
	cout << (char)185;
	cout << endl;
	cout << endl;
	cout << (char)186;
	cout << "       Zima     " << (char)186;
	cout << "     Vesna     " << (char)186;
	cout << "     Osen      " << (char)186;
	cout << "     Leto     " << (char)186;
	cout << endl;
	cout << endl;
	cout << (char)200;
	for (int i = 0; i < 63; i++) {
		if (i != 0 && i % 16 == 0) {
			cout << char(202);
		}
		else {
			cout << (char)205;
		}
	}
	cout << (char)188;
	return 0;
}