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
	std::cout << "������� ����� �����: ";
	std::cin >> bank.numberAccount;
	std::cout << "������� ��� ���������: ";
	std::cin >> bank.OwnersName;
	std::cout << "������� ������: ";
	std::cin >> bank.balance;
	std::cout << "������� ����� ������: ";
	std::cin >> bank.newBalance;
	std::cout << "��� ����: " << bank.OwnersName << "," << bank.numberAccount << "," << bank.newBalance << std::endl;
}