#include <vector>
#include "Student.h"
#pragma once

class CSubject
{
public:
	CSubject();
	~CSubject();

	void CountRatio();        //�ֱ�������Ƶ�ͨ����
	double EnglishPassRatio();          //����ͨ���ʵĽӿ�
	double MathPassRatio();
	double SciencePassRatio();
	void AddToSubjects(double s1,double s2,double s3);

private:
	std::vector<double> english, math,science;
	double passratio[3];
};

