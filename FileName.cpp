#include <iostream>
using namespace std;
long long Balance = 1000000;
int Deposit;
int Number;
int Choices();

int Password()
{
	int PassWord;
	cout << "       Welcome to ATM" << endl;
	cout << " " << endl;
	cout << "Please Enter Your Password" << endl;
	cin >> PassWord;
	while (PassWord != 0000)
	{
		cout << "Please Enter The Correct Password: " << endl;
		cin >> PassWord;
	}
	return PassWord;
}

void Menu()
{
	cout << "*******Menu*******" << endl;
	cout << "1-Show The Balance: " << endl;
	cout << "2-Cash Withdrawal: " << endl;
	cout << "3-Deposit: " << endl;
	cout << " " << endl;
	cout << "Please choose one of these options: " << endl;
}
int ShowBalance()
{
	cout << " " << endl;
	cout << "Your Balance Equal: " << Balance << "  LE" << endl;
	int A;
	cout << "1-Back to Menu." << endl;
	cin >> A; 
	switch (A)
	{
	case 1:
		Menu();
		Choices();
		break;
	}
	return Balance;
}
int Withdrwal1()
{
	cout << " " << endl;
	cout << "Please Enter the number you want to withdrew: " << endl;
	cin >> Number;
	while (Number > 20000 )
	{
		cout << "The maximum withdrawal limit is 20000 LE...Please enter the number again." << endl;
		cin >> Number;
	}
	while (Number < 50)
	{
		cout << "You can’t withdrew less than 50 LE" << endl;
		cin >> Number;
	}
	cout << "You Withdrew " << Number << " LE" << endl;
	return Number;
}
int CheckBalance()
{
	int A;
	cout << "Do you want to check your balance ?" << endl;
	cout << "1-Yes." << endl;
	cout << "2-No" << endl;
	cin >> A;
	switch (A)
	{
	case 1:
		cout << "Your Balance Equal: " << Balance - Number << "  LE" << endl;
		break;
	case 2:
		cout << "You Are Welcomed" << endl;
		break;
	}
	return Number;
}
int Withdrawal2()
{
	int B;
	cout << "1-Please Enter the number you want to withdrew: " << endl;
	cout << "2-Back to menu again" << endl;
	cin >> B;
	switch (B)
	{
	case 1:
		Withdrwal1();
		CheckBalance();
		break;
	case 2:
		Menu();
		Choices();
		break;
	}

	return Number;
}
int Deposit1()
{
	cout << " " << endl;
	cout << "Please enter the number you want to deposit." << endl;
	cin >> Deposit;
	while (Deposit > 20000) 
	{
		cout << "The maximum deposit limit is 20000 LE." << endl;
		cin >> Deposit;
	}
	cout << "The number you deposited: " << Deposit << "  LE" << endl;
	return Deposit;
}
int Checkbalance()
{
	cout << "Do you want to check your balance ?" << endl;
	cout << "1-Yes." << endl;
	cout << "2-No" << endl;
	int A;
	cin >> A;
	switch (A)
	{
	case 1:
		cout << "Your Balance Equal: " << Balance + Deposit << "  LE" << endl;
		break;
	case 2:
		cout << "You Are Welcomed" << endl;
		break;
	}
	return Deposit;
}
int Deposit2()
{
	int B;
	cout << "1-Please enter the number you want to deposit." << endl;
	cout << "2-Back to menu again" << endl;
	cin >> B;
	switch (B)
	{
	case 1:
		Deposit1();
		Checkbalance();
		break;
	case 2:
		Menu();
		Choices();
		break;
	}
	return Deposit;
}

int Choices()
{
	int Choice;
	cin >> Choice;
	switch (Choice)
	{
	case 1:
		ShowBalance();
		break;
	case 2:
		Withdrawal2();
		break;
	case 3:
		Deposit2();
		break;
	}
	return Choice;
}

int main()
{

	Password();
	Menu();
	Choices();
	return 0;
}