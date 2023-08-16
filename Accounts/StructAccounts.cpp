#include <iostream>
#include <Windows.h>

struct BankAccount {
	int numberAccount;
	std :: string OwnersName;
	int balance;	
};

int changeBalance(BankAccount& bank, int newBalance) {
	bank.balance = newBalance;
	return bank.balance;
}

int main() {
	BankAccount bank;

	setlocale(LC_ALL, "Russian");
	std::cout << "¬ведите номер счЄта: ";
	std::cin >> bank.numberAccount;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> bank.OwnersName;
	std::cout << "¬ведите баланс: ";
	std::cin >> bank.balance;
	std::cout << "¬ведите новый баланс: ";
	int newBalance;
	std::cin >> newBalance;
	int newBalanceBanckAccount = changeBalance(bank,newBalance);
	std::cout << "¬аш счЄт: " << bank.OwnersName << "," << bank.numberAccount << "," << newBalanceBanckAccount << std::endl;
}