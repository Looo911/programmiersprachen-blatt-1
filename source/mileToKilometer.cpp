# define CATCH_CONFIG_RUNNER
# include "catch.hpp"
# include <cmath>
# include <string>

double mileToKilometer(double a)
{
	double b = 1.60934*a;
	return b;
}

int main()
{
	double a;
	std::cout << "Wieviele Meilen wollen sie in Kilometer umrechnen?" << std::endl;
	std::cin >> a;
	std::cout << a << " Meilen sind umgerechnet " << mileToKilometer(a) << " Kilometer." << std::endl;

}

