#include <iostream>

//function pointer example
//use when you want the input data to be specified by another function

int init1(int x, int y)
{
	int a = x + y;
	return a;
}

int sum1(int x, int (*fcpr1)(int, int))
{
	int addition = x + fcpr1(5, 4);
	return addition;
}

float init2(float a, float b)
{
	float z = a + b;
	return z;
}

float sum2(float c, float lz)
{
	float addition = c + lz;
	return addition;
}

int main()
{
	std::cout << sum1(5, init1) << std::endl;

	float result = init2(2.2, 3.3);
	std::cout << sum2(5.0, result)<<std::endl;

	return 0;
}