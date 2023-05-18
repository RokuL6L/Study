#pragma once

class MyLib
{
private:
	MyLib()
	{

	}
public:
	static void logo();
	static void ending();
public:
	static int input_integer(string msg);
	static char input_char(string msg);
	static float input_float(string msg);
	static string input_string(string msg);
};