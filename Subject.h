#include <vector>
#include "Student.h"
#pragma once

class CSubject
{
public:
	CSubject();
	~CSubject();

	void CountRatio();        //分别计算三科的通过率
	double EnglishPassRatio();          //访问通过率的接口
	double MathPassRatio();
	double SciencePassRatio();
	void AddToSubjects(double s1,double s2,double s3);

private:
	std::vector<double> english, math,science;
	double passratio[3];
};

