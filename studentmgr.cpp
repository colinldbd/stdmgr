#include <iostream>
#include "Student.h"
#include "Classes.h"
#include "Subject.h"
#include "Control.h"
#include "MyMenu.h"
#include <stdlib.h>

using namespace std;

CControl control;

int main()
{
	CMyMenu menu;

	menu.AddItem(" . Add student.");
	menu.AddItem(" . Check student");
	menu.AddItem(" . Get pass ratio.");
	menu.AddItem(" . Quit");
	int c = menu.Choose();

	while (1) {
		switch (c) {
		case 1:control.InputStudents();
			break;
		case 2:control.Check();
			system("pause");
			break;
		case 3:control.OutputPassRatio();
			system("pause");
			break;
		case 4:
			cout << "Out." << endl;
			system("pause");
			return 0;
		default:break;
		}

		system("cls");
		c = menu.Choose();
	}
}