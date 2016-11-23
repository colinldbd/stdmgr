#include "Classes.h"
#include <iostream>



CClasses::CClasses()
{
}


CClasses::~CClasses()
{
}

int CClasses::CheckStudent(int cid)
{
	if (!students.empty()) {
		for (int i = 0; i < students.size(); i++) {
			if (students[i].ReadID() == cid) {
				return students[i].ReadID();
			}
			else {
				return NOT_FOUND;
			}
		}
	}
}

void CClasses::AddStudent(CStudent student)
{
	students.push_back(student);
}

CStudent &CClasses::GetStudent(int cid)
{
	if (!students.empty()) {
		for (int i = 0; i < students.size(); i++) {
			if (students[i].ReadID() == cid) {
				return students[i];
			}
		}
	}
}
