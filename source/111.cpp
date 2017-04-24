#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int whole(double x)
{
return floor(double(x));
}

double after(double y)
{
double whole=floor(y); //whole
double after=y-whole; //after

return after;
}

TEST_CASE("decimalpunkt","decimalpunkt")
{
	REQUIRE(Approx(whole(123.321321==123)));
}
int main(int argc, char*argv[])
{

	return Catch::Session().run (argc, argv);
	
}