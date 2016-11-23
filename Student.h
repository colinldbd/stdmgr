#include <string>
#pragma once
#define ERROR_SCORE 0


class CStudent
{
public:
	CStudent();
	~CStudent();

	int GetID(int);
	int  GetScore(double,int);                                  //��main������õ�����
	void GetName(const char *);                        //��main������õ�����
	double *ReadScore();                               //�ӿڷ��ʳ�Ա
	int ReadID();
	const char *ReadName();
private:
	int id;
	std::string name;
	double scores[3];

	void SetScore(double, int);                          //��main���������ø�����
};

