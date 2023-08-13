#include <iostream>

struct BankAccount {
	int numberAccount;
	std :: string OwnersName;
	int balance;
	int newBalance;
};

int main() {
	BankAccount bank;

	setlocale(LC_ALL, "Russian");
	std::cout << "¬ведите номер счЄта: ";
	std::cin >> bank.numberAccount;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> bank.OwnersName;
	std::cout << "¬ведите баланс: ";
	std::cin >> bank.balance;
	std::cout << "¬ведите новый баланс: ";
	std::cin >> bank.newBalance;
	std::cout << "¬аш счЄт: " << bank.OwnersName << "," << bank.numberAccount << "," << bank.newBalance << std::endl;
}