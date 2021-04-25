#ifndef INVESTMENT_H
#define INVESTMENT_H

class InvestmentCalculator {
public:
	void CalculateInvestment();
	void PrintInvestment();

private:
	double initialDeposit;
	double monthlyDeposit;
	double lengthOfTime;
	double annualCompoundInterest;
};
#endif // !INVESTMENT_H

