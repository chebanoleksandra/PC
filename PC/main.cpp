#include <iostream> 
#include"myLibrary.h" 
using namespace std;

int main()
{
	int choice;
	cout << "1 - Office PC, 2 - Game PC, 3 - Home PC: ";
	cin >> choice;
	PC* pc = nullptr;
	switch (choice)
	{
	case(1):
		pc = new OfficePC("Computer", "CPU", "GPU", "SSD", "RAM", "Micro");
		break;
	case(2):
		pc = new GamePC("Computer", "CPU", "GPU", "SSD", "RAM", "Keyboard", "Headphones");
		break;
	case(3):
		pc = new HomePC("Computer", "CPU", "GPU", "SSD", "RAM", "Camera");
		break;
	}
	cout << pc->GetPrice() << endl;
}
