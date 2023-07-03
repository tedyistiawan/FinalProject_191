#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	/*lengkapi disini*/
};
class Lingkaran :public bidangDatar { /*lengkapi disini*/ };
class Persegipanjang :public bidangDatar { /*lengkapi disini*/ };
int main() { /*lengkapi disini*/ }