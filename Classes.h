#include <vector>
#include "Student.h"
#pragma once
#define NOT_FOUND 0


class CClasses
{
public:
	CClasses();
	~CClasses();
	int CheckStudent(int);     //��ID���Ҷ�Ӧ��ѧ����
	CStudent &GetStudent(int);
	void AddStudent(CStudent);
private:
	std::vector<CStudent> students;
};

