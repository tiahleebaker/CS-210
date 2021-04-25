#include <iostream>
#include <iomanip>
#include "Investment.h"
using namespace std;

int main() {
	InvestmentCalculator client1;
	client1.CalculateInvestment();
	client1.PrintInvestment();

	return 0;
}