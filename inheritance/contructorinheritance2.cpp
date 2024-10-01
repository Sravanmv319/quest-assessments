#include <iostream>
using namespace std;

class alpha {
	int x;
public:
	alpha(int i) {
		x = i;
		cout << "Alpha Initialized\n";
	}
	void show() {
		cout << "x = " << x << endl;
	}
};

class beta {
	float y, z;
public:
	beta(float j,float k):y(j),z(j+k) {
		cout << "Beta Initialized\n";
	}
	void showb() {
		cout << "y = " << y << endl;
		cout << "z = "<<z << endl;
	}
};
class gamma :public beta, public alpha {
	int m, n;
public:
	gamma(int a, int c, float d ) :
		alpha(a * 2), beta(d,d), m(a)
	{
		n = c;
		cout << "Gamma Initialized\n";
	}
	void show_mn() {
		cout << "m = " << m << "\nn = " << n << endl;
	}
};

int main() {
	gamma g(2,4,2.5);
	cout << "\n";

	g.show();
	g.showb();
	g.show_mn();
}