#include <math.h>
#include <iostream>


int is_prime(double x)
{
	int isprime = 0;
	for(int i = 2; i <= sqrt(x); i += 2) //!
	{
		if(i % 2 == 0)
			i+=1;

		if((int(x)% i) == 0)
		{
			isprime = 1;
			break;
		}
	}

	return isprime;
}
// 0 prime,1 nichtprime
int main()
{
	bool a= is_prime(997);
	bool b= is_prime(1000);
    std::cout << a<<"\n";
    std::cout << b<<"\n";
    return 0;
}