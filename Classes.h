#include <vector>
#include "Student.h"
#pragma once
#define NOT_FOUND 0


class CClasses
{
public:
	CClasses();
	~CClasses();
	int CheckStudent(int);     //用ID查找对应的学生。
	CStudent &GetStudent(int);
	void AddStudent(CStudent);
private:
	std::vector<CStudent> students;
};

