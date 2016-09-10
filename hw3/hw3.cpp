//Name: Promise Owei
//filename: hw3.cpp
//Development Environment: vim, g++, Linux
//Compile: g++ -o hw3 hw3.cpp
//Sample usage: ./hw3

 #include <iostream>
 #include <iomanip>
 using namespace std;

 int main() 
{
	int month = 0;
	double loan = 0.00;
	double interestRatePerYear = 0.00;
	double monthlyInterestRate = 0.00;
	double interestPaidPerMonth = 0.00;
	double monthlyPayment = 0.00;
	double lastPayment = 0.00;
	double principal = 0.00;
	double totalInterest = 0.00;

	cout << "Loan Amount: $";
	cin >> loan;
	cout << "Interest Rate (% per year): ";
	cin >> interestRatePerYear;
	cout << "Monthly Payments: $";
	cin >> monthlyPayment;
	cout << endl;
	
	interestPaidPerMonth = loan * interestRatePerYear/12/100;
	
	while (monthlyPayment < interestPaidPerMonth)
	{ 
		cout << "Enter a monthly payment amount greater than $ " << interestPaidPerMonth << endl;
	}
		
	cout << left << setw(10) << "Month ";
        cout << left << setw(10) << "Balance ";
	cout << left << setw(11) << "Payment ";
	cout << left << setw(11) << "Rate ";
	cout << left << setw(11) << "Interest ";
	cout << left << setw(11) << "Principal \n";
	cout << left << setw(10) << month << "$";
	cout << left << setw(10) << loan;
	cout << left << setw(10) << "N/A ";
	cout << left << setw(10) << "N/A ";
	cout << left << setw(10) << "N/A ";
	cout << left << setw(10) << "N/A ";
	

	for (month = 1; loan > 0; month++)
	{
	while (loan > 0)
	 {
	if (loan > monthlyPayment) 
	{
	
		monthlyInterestRate = interestRatePerYear / 12;
	 	interestPaidPerMonth = loan * monthlyInterestRate / 100;
	 	totalInterest = totalInterest + interestPaidPerMonth;
	 	principal = monthlyPayment - interestPaidPerMonth;
	 	loan = loan - principal;
		
		cout << left << setw(10) << "Month ";
                cout << left << setw(10) << "Balance ";
        	cout << left << setw(11)<< "Payment ";
        	cout << left << setw(11) << "Rate ";
         	cout << left << setw(11) << "Interest ";
        	cout << left << setw(11) << "Principal \n";
        	cout << left << setw(10) << month << "$";
       		cout << left << setw(10) << loan << "$";
        	cout << left << setw(10) << monthlyPayment;
       		cout << left << setw(10) << monthlyInterestRate << "$";
        	cout << left << setw(10) << interestPaidPerMonth << "$";
        	cout << left << setw(10) << principal;

	 }
	else { /* Last month payment */
	        monthlyInterestRate = interestRatePerYear / 12;
                interestPaidPerMonth = loan * monthlyInterestRate / 100;
                totalInterest = totalInterest + interestPaidPerMonth;
                lastPayment = monthlyPayment + loan;
		monthlyPayment = loan + interestPaidPerMonth;
		principal = loan;
                loan = 0.00;

		cout << left << setw(10) << "Month ";
                cout << left << setw(10) << "Balance ";
                cout << left << setw(11) << "Payment ";
                cout << left << setw(11) << "Rate ";
                cout << left << setw(11) << "Interest ";
                cout << left << setw(11) << "Principal \n";
                cout << left << setw(10) << month << "$";
                cout << left << setw(10) << loan << "$";
                cout << left << setw(10) << monthlyPayment;
                cout << left << setw(10) << monthlyInterestRate << "$";
                cout << left << setw(10) << interestPaidPerMonth << "$";
                cout << left << setw(10) << principal;
        }
	
	month++;	
	}
}
	cout << "\nIt takes " << month << " months to pay off the loan. " << endl;
	cout << "Total interest paid is:  $" << totalInterest << endl;

	return 0;
}
