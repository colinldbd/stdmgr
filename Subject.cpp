#include "Subject.h"



CSubject::CSubject()
{
	passratio[0] = passratio[1] = passratio[2] = 0;
}


CSubject::~CSubject()
{
}

void CSubject::CountRatio()
{
	if(!english.empty()){
		auto iter = english.begin();
		double pass = 0;
		double total = 0;
		
		while (iter < english.end()) {
			if (*iter >= 60) {
				pass++;
				}
			iter++;
			total++;
		}
		passratio[0] = pass / total;
	}
	
	if (!math.empty()) {
		auto iter = math.begin();
		double pass = 0;
		double total = 0;

		while (iter < math.end()) {
			if (*iter >= 60) {
				pass++;
			}
			total++;
			iter++;
		}
		passratio[1] = pass / total;
	}

	if (!science.empty()) {
		auto iter = science.begin();
		double pass = 0;
		double total = 0;

		while (iter < science.end()) {
			if (*iter >= 60) {
				pass++;
			}
			total++;
			iter++;
		}
		passratio[2] = pass / total;
	}
}

double CSubject::EnglishPassRatio()
{
	return passratio[0];
}

double CSubject::MathPassRatio()
{
	return passratio[1];
}

double CSubject::SciencePassRatio()
{
	return passratio[2];
}

void CSubject::AddToSubjects(double s1, double s2, double s3)
{
	english.push_back(s1);
	math.push_back(s2);
	science.push_back(s3);
}




