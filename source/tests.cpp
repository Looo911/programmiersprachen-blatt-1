# define CATCH_CONFIG_RUNNER
# include "catch.hpp"
# include <cmath>


int gcd (int a, int b)
{                        
   int  r;                	

   while (b != 0) {       	
      r = a % b;
      a = b;
      b = r;
   }
   return a; 
}

TEST_CASE ("describe_gcd ", "[gcd]")
{
	REQUIRE (gcd (2 ,4) == 2);
	REQUIRE (gcd (6 ,9) == 3);
	REQUIRE (gcd (3 ,7) == 1);
}




int checksum(int a)
{
	int n = 0;
	int m = 0;

	while (a != 0)
	{
		n = a % 10;
		a = a/10;
		m = m + n;
	}
	return m;
}

TEST_CASE ("describe_checksum ", "[checksum]")
{
	REQUIRE (checksum(1238) == 14);
	REQUIRE (checksum(12389) == 23);
	REQUIRE (checksum(1223) == 8);
	REQUIRE (checksum(116369) == 26);
}




int sumMultiples()
{
	int n = 0;
	for (int i = 0; i <= 1000; ++i)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			n = n+i;
		}
	}
	return n;
}

TEST_CASE ("describe_sumMultiples ", "[sumMultiples]")
{
	REQUIRE (sumMultiples() == 234168);
}



float fract(float a)
{
	int b = a;
	float c = a - float(b);
	return c;
}

TEST_CASE ("describe_fract ", "[fract]")
{
	REQUIRE (fract(1.238) == Approx(0.238));
	REQUIRE (fract(12.389) == Approx(0.389));
	REQUIRE (fract(122.3) == Approx(0.3));
}



float zylinder(float h, float r)
{
	float vol = r*r*M_PI*h;
	float surf = 2 * r * r * M_PI + 2 * r * M_PI * h;

	return vol, surf;
}

TEST_CASE ("describe_zylinder ", "[zylinder]")
{
	REQUIRE (zylinder(3.5, 2) == (Approx(43.98), Approx(69.115)));
}



double mileToKilometer(double a)
{
	double b = 1.60934*a;
	return b;
}

TEST_CASE ("describe_mileToKilometer ", "[mileToKilometer]")
{
	REQUIRE (mileToKilometer(4.7) == Approx(7.563898));
}



int main (int argc , char * argv [])
{
	return Catch :: Session (). run( argc , argv );
}