#include "Student.h"



CStudent::CStudent()
{
	id = 0;
	name = "";
	scores[0] = scores[1] = scores[2] = 0;
}


CStudent::~CStudent()
{
}

int CStudent::GetScore(double score_temp, int subject)
{
	if (score_temp < 0 || score_temp>100) {
		return ERROR_SCORE;
	}
	else {
		SetScore(score_temp, subject);
	}
}

void CStudent::SetScore(double nscore,int subject)
{
	scores[subject] = nscore;
}

double *CStudent::ReadScore()
{
	return scores;
}

int CStudent::ReadID()
{
	return id;
}

const char *CStudent::ReadName()
{
	return name.c_str();
}

void CStudent::GetName(const char * pname)
{
	name = pname;
}

int CStudent::GetID(int nid)
{
	id = nid;

	return id;
}