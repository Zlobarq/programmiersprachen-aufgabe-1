#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

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

TEST_CASE("describe_gcd","[gcd]")
{
	REQUIRE(gcd(2,4)==2);
	REQUIRE(gcd(9,6)==3);
	REQUIRE(gcd(3,7)==1);
}
int main(int argc, char*argv[])
{
	return Catch::Session().run (argc, argv);
	
}