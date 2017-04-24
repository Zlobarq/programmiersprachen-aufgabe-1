#include <math.h>
#include <iostream>


int factoriel(int x)
{
int fact=1;
	for(int i=1; i <= x; i += 1) //!
	{
	fact=i*fact;
	}

	return fact;
}
int main()
{
	int a= factoriel(4);
    std::cout << a<<"\n";
    return 0;
}