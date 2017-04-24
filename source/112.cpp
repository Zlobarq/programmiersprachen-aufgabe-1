#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
float cyllinder(float h,float r)
{
	return (2*3.14*r)+h*(2*3.14*r);

}

TEST_CASE("cyllinder","[cyllinder]")
{
	REQUIRE(cyllinder(5,5)==Approx(188.4));

}
int main(int argc, char*argv[])
{
	return Catch::Session().run (argc, argv);
	
}