#include <iostream>
#include <string>
#include<ctime>
#include "circle.h"
#include "point.h"
using namespace std;

class s
{
public:
	int r(int x)
	{
		int result = 0;
		do {
			int new_result = result * 10 + x % 10;
			if (new_result / 10 != result) {
				return 0;
			}
			result = new_result;
			x /= 10;
		} while (x);
		return result;
	}
};

int main()
{
	int e = -12;
	s d;
	cout << d.r(e) << endl;
}

//ddd
