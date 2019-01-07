#include <iostream>

#include "pch.h"
#include <iostream>
using namespace std;
int catalan(int x);

int main()
{
	int x;
	cout << "please enter a number for catalan: " << endl;
	cin >> x;
	cout << "for x = 10, catalan is " << catalan(x) << endl;
	//	cout<<catalan(10)<<endl;
	return 0;
}

int catalan(int x) {
	int num = 0;
	if (x == 0) {
		return 1;
	}
	else if (x > 0) {
		for (int i = 0; i < x; i++) {
			num += catalan(i)*catalan(x - 1 - i);
		}

		return num;
	}
}