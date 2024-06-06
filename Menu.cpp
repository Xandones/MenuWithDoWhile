#include <iostream>

int main()
{
	int choice = 3; // Do/While is an excelent choice for menus because it will run at least once even if the option (choice) is already set for quitting.


	do
	{
		std::cout << "**** Tickets for cinema ****\n";
		std::cout << "1 - Buy half price ticket\n";
		std::cout << "2 - Buy full price ticket\n";
		std::cout << "3 - Quit program\n";
		std::cout << "\nChoose your option: ";
		std::cin >> choice;

		switch (choice)
		{
			case 1: std::cout << "\nYou bought a half price ticket.\n\n"; break;
			case 2: std::cout << "\nYou bought a full price ticket.\n\n"; break;
			case 3: std::cout << "\nQuitting program.\n\n"; break;
			default: std::cout << "\nInvalid option!\n\n";
		}
	} while (choice != 3);

	system("PAUSE");
}