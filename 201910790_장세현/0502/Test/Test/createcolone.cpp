//#include <iostream>
//#include <Windows.h>
//// �������ݷ� ( : ) 
///*
//*  �ݷ��ʱ�ȭ
//* int n1 = 10;
//*  ���Կ��� �ʱ�ȭ
//* int n1;
//* n1 = 10;
//* 
//*/
//
//class RectAngle1 {
//
//	int x;
//	int y;
//
//
//public:
//	RectAngle1() : x(0), y(10+2)
//	{
//		
//	}
//	RectAngle1(int _x, int _y) : x(_x), y(_y)
//	{
//
//	}
//
//public:
//	void Draw() {
//		HDC hdc = GetWindowDC(GetForegroundWindow());
//		RectAngle(hdc, x, y, x + 50, y + 50);
//	}
//};
//
//int main() {
//	RectAngle1 r(100, 200);
//	r.Draw();
//
//	return 0;
//}