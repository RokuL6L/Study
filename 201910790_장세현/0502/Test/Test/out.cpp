#include "std.h"

class RectAngle1 {
private:
	int x;
	int y;
	int width;
	int height;

public:
	RectAngle1(int _x, int _y, int _width, int _height);

	RectAngle1(int _x, int _y);

public:
	void Draw();
};

RectAngle1::RectAngle1(int _x, int _y, int _width, int _height) {
	x = _x;
	y = _y;
	width = _width;
	height = _height;
}

RectAngle1::RectAngle1(int _x, int _y) {
	x = _x;
	y = _y;
	width = 100;
	height = 100;
}

//앞에 붙이세요
void RectAngle1::Draw() {
	cout << "[좌표] " << x << ", " << y << endl;
	cout << "[크기] " << width << " * " << height << endl;
}



int main() {
	RectAngle1 r1(10, 10);
	RectAngle1 r2(100, 100, 50, 80);

	r1.Draw();
	r2.Draw();


	return 0;
}