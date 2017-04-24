#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>
#include <cmath>

int checksum(int a)
{
int b=0;
int result=0;
    while (a>0)
    {
 	b=a%10;
 	a=(a-b)/10;
 	result+=b;
    }
    return result;
}
TEST_CASE("describe_checksum","[checksum]")
{
	REQUIRE(checksum(117607)==22);
}

int main(int argc, char*argv[])
{
	int antwort=checksum(117607);
	return Catch::Session().run (argc, argv);
}