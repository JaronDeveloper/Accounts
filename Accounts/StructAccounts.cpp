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
	std::cout << "������� ����� �����: ";
	std::cin >> bank.numberAccount;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "������� ��� ���������: ";
	std::cin >> bank.OwnersName;
	std::cout << "������� ������: ";
	std::cin >> bank.balance;
	std::cout << "������� ����� ������: ";
	int newBalance;
	std::cin >> newBalance;
	int newBalanceBanckAccount = changeBalance(bank,newBalance);
	std::cout << "��� ����: " << bank.OwnersName << "," << bank.numberAccount << "," << newBalanceBanckAccount << std::endl;
}