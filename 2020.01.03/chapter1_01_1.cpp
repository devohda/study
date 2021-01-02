#include <iostream>
using namespace std;


int main() {

	int a[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << i+1 << "번째 정수 입력: ";
		cin >> a[i];
		sum += a[i];
	}
	cout << "합계: " << sum << endl;

	return 0;
}