#include <iostream>
#include <locale>
#include <vector>
#include <math.h>

using namespace std;

bool isSimpl(int el) {
	int cnt = 0;
	for (int i = 1; i <= el; i++) {
		if (el % i == 0) cnt++;
	}
	return cnt > 2 ? false : true;
}

int main() {

	setlocale(LC_ALL, "");

	int x, temp, del;
	vector<int> arr;
	cout << "������� X:" << endl;
	cin >> x;

	temp = x;
	del = x;

	while (temp > 1) {
		while (del > 1) {
			if (temp % del == 0 && isSimpl(del) == true) {
				arr.push_back(del);
				//cout << "del = " << del << endl;
				break;
			}
			del--;
		}
		temp /= del;
		del = temp;
		//cout << "del = " << del << endl;
	}

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << ' ';
	}

	//cout << "arr = " << arr.size() << endl;
	
	return 0;
}