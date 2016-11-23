#include "MyMenu.h"
#include <iostream>

using namespace std;

CMyMenu::CMyMenu()
{
	prompt = "Please select:";
}


CMyMenu::~CMyMenu()
{
}

void CMyMenu::AddItem(const char * pstr)
{
	item.push_back(pstr);
}

int CMyMenu::Choose()
{
	cout << prompt << endl;

	for (int i = 0; i < item.size(); i++) {
		cout << "\t"<<i+1<<item[i] << endl;
	}

	int choice = 0;

	cin >> choice;

	while (choice<1 || choice>item.size()) {
		cout << "Invaid input,pleae select again:" << endl;
		choice = 0;
		cin >> choice;
	}

	return choice;
}



