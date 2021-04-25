#include <iostream>
#include <iomanip>
#include "Investment.h"
using namespace std;

void InvestmentCalculator::CalculateInvestment() {
	char keyToContinue;

	cout << setw(20) << left << setfill('*') << "**********Data Input " << endl;
	cout << "Initial Investment amount: $" << endl;
	cin >> initialDeposit;

	cout << "Monthly Deposit: $" << endl;
	cin >> monthlyDeposit;

	cout << "Annual Interest:  " << endl;
	cin >> annualCompoundInterest;

	cout << "Number of years: " << endl;
	cin >> lengthOfTime;

	cout << "Press any key to continue . . . " << endl;
	cin >> keyToContinue;
};
void InvestmentCalculator::PrintInvestment() {
	double yearEndBalance = 0.00;
	double yearEndInterest = 0.00;
	double tempHolder = 0.00;
	int timeInYears;

	timeInYears = (int)lengthOfTime;

	cout << setw(60) << left << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << setw(60) << setfill('=') << endl;
	cout << "Year      Year End Balance     Year End Earned Interest" << endl;
	cout << setw(60) << setfill('-') << endl;

	yearEndBalance = initialDeposit + (monthlyDeposit * 12);
	for (int i = 0; i < timeInYears; ++i) {
		yearEndInterest = (yearEndBalance) * ((annualCompoundInterest / 100.0) / 12.0);
		yearEndBalance = yearEndBalance + yearEndInterest;
		cout << setprecision(2) << "    " << i + 1 << "                 $" << yearEndBalance << "                             $" << yearEndInterest << endl;
		tempHolder = yearEndBalance + tempHolder;
	}

	cout << setprecision(2) << "Total at the end of time period: $" << tempHolder << endl;

}
