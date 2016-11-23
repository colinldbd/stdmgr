#pragma once
#include "Classes.h"
#include "Subject.h"
#include <vector>


class CControl
{
public:
	CControl();
	~CControl();

	void InputStudents();
	void Check();
	void OutputPassRatio();
private:
	CClasses theclass;
	CSubject thesubject;
};

