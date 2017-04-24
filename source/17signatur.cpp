#include <iostream>

int var = 3;

double sum (double a,double b) //double a,double b
{
	return a+b;
}

int square (int var) //int var
{
	return var*var;
}

int main()
{
	for (int i=0; i != 100; i++){
	std::cout << "i^2=" << square(i) << '\n';
	std::cout << "i+i=" << sum(i,i) << '\n';
	}
}