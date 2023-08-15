#include <iostream>
#include <Windows.h>

struct BankAccount {
	int numberAccount;
	std :: string OwnersName;
	int balance;
	int newBalance;
};

int changeballance(BankAccount bank) {	
	int change = (bank.balance + bank.newBalance) / 2;
	return change;
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
	std::cin >> bank.newBalance;
	int newBalanceBanckAccount = changeballance(bank);
	std::cout << "¬аш счЄт: " << bank.OwnersName << "," << bank.numberAccount << "," << newBalanceBanckAccount << std::endl;
}