#include <iostream>
#include <cmath>

using namespace std;

void checkNumber(double num)
{
    if (num <= 0) {
        throw logic_error("Is not number or below zero");
    }
}

int main() {
    double initialAmount, creditAmount, percentRate, monthlyPayment;
    int months;

    cout << "Initial amount: "; 
    cin >> initialAmount;
    checkNumber(initialAmount);

    cout << "Credit amount: "; 
    cin >> creditAmount;
    checkNumber(creditAmount);

    cout << "Percent rate: ";
    cin >> percentRate;
    checkNumber(percentRate);

    cout << "Count months: ";
    cin >> months;
    checkNumber(months);

    double remainingAmount = creditAmount;
    percentRate = percentRate / 100 / 12;
    monthlyPayment = (creditAmount * (percentRate * pow(1 + percentRate, months))) / (pow(1 + percentRate, months) - 1);
    
    cout << "Month\tPayment\tRemaining\tPercent" << endl;

    for (int i = 1; i <= months; i++) {
        double percent = remainingAmount * percentRate;
        double earlyPayment;

        // Досрочное погашение
        cout << "Enter early payment for month: ";
        cin >> earlyPayment;

        if (earlyPayment > 0) 
        {
            remainingAmount -= earlyPayment;
            monthlyPayment = remainingAmount / (months - i + 1) + percent;
        }
        else
        {
            remainingAmount -= (monthlyPayment - percent);
        }

        cout << i << "\t" << monthlyPayment << "\t" << remainingAmount << "\t\t" << percent << endl;
    }

    return 0;
}