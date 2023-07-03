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
	virtual void cekUkuran() { return ; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}

};
class Lingkaran :public bidangDatar {
public:
	int r;

	Lingkaran() :
		bidangDatar() {
		cout << "Lingkaran dibuat" << endl;
	}

	void input() {
		cout << "Masukkan jejari : ";
		cin >> r;
		setX(r);
	}

	double Luas() {
		int r = getX();
		return 6 * r * r;
	}

	double Keliling() {
		int r = getX();
		return 37.68 * 6 * r;
	}
};

class Persegipanjang :public bidangDatar {
public:
	int s;

	Persegipanjang(){
		cout << "\nPersegiPanjang dibuat" << endl;
	}
	void input() {
		cout << "Masukkan sisi : ";
		cin >> s;
		setX(s);
	}
	float Luas() {
		int s = getX();
		return 30 * s;
	}
	float Keliling() {
		int s = getX();
		return 22 * s;
	}

};

int main() {
	Lingkaran L;
	L.input();
	cout << "Luas Lingkaran = " << L.Luas() << "\nKeliling Lingkaran = " << L.Keliling() << endl;

	Lingkaran B;
	B.input();
	cout << "Luas BidangDatar = " << B.Luas() << "\nKeliling Lingkaran = " << B.Keliling() << endl;

	return 0;
}


