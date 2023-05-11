#include <iostream>
using namespace std;

void binarySearch(int adit[48], int n, int desired_element) {
	int lowerbound = 0;
	int upperbound = n - 1;

	while (lowerbound <= upperbound) {
		int mid = (lowerbound + upperbound) / 2;

		if (adit[mid] == desired_element) {
			cout << "Found" << endl;
			return;
		}

		if (desired_element < adit[mid]) {
			upperbound = mid - 1;
		}

		else {
			lowerbound = mid + 1;

		}
	}

	cout << "Not Found" << endl;
}

int main()
{
	int adit[48] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,48};
	int n =  sizeof(adit) / sizeof(adit[48]);
	int desired_element;

	cout << "Masukkan elemen yang ingin dicari: ";
	cin >> desired_element;

	binarySearch(adit, n, desired_element);

	return 0;
}