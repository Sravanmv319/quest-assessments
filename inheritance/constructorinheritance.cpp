//#include <iostream>
//using namespace std;
//
//class alpha {
//	int x;
//public:
//	alpha(int i) {
//		x = i;
//		cout << "Alpha Initialized\n";
//	}
//	void show() {
//		cout << "x = " << x << endl;
//	}
//};
//
//class beta {
//	float y;
//public:
//	beta(float j) {
//		y = j;
//		cout << "Beta Initialized\n";
//	}
//	void showb() {
//		cout << "y = " << y << endl;
//	}
//};
//class gamma :public beta, public alpha {
//	int m, n;
//public:
//	gamma (int a, float b, int c, int d):
//		alpha(a),beta(b)
//	{
//		m = c;
//		n = d;
//		cout << "Gamma Initialized\n";
//	}
//	void show_mn() {
//		cout << "m = " << m << "\nn = " << n << endl;
//	}
//};
//
//int main() {
//	gamma g(5, 10.75, 20, 30);
//	cout << "\n";
//
//	g.show();
//	g.showb();
//	g.show_mn();
//}