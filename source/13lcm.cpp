#include <iostream>
int gcd(int a, int b)
{
	bool loop=1;
    while (loop==1)
    {
    	if (a==0 || b==0)
    		{loop=0;}
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;


    }
}

 
int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}
 
int main()
{
    int res = 1;
    for (int i = 2; i <= 20; i++)
    {
        res = lcm(res, i);
    }
 
    std::cout << res<<"\n";
    return 0;
}