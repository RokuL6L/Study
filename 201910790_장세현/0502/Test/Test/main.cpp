#include "std.h"

class RectAngle1 {
private:
	int x;
	int y;
	int width;
	int height;

public:
	RectAngle1(int _x, int _y, int _width, int _height) {
		x = _x;
		y = _y;
		width = _width;
		height = _height;
	}

	RectAngle1(int _x, int _y) {
		x = _x;
		y = _y;
		width = 100;
		height = 100;
	}

public:
	void Draw() {
		cout << "[ÁÂÇ¥] " << x << ", " << y << endl;
		cout << "[Å©±â] " << width << " * " << height << endl;
	}
};

int main() {
	RectAngle1 r1(10,10);
	RectAngle1 r2(100, 100, 50, 80);

	r1.Draw();
	r2.Draw();


	return 0;
}