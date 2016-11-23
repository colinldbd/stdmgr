#include <string>
#pragma once
#define ERROR_SCORE 0


class CStudent
{
public:
	CStudent();
	~CStudent();

	int GetID(int);
	int  GetScore(double,int);                                  //从main的输入得到分数
	void GetName(const char *);                        //从main的输入得到名字
	double *ReadScore();                               //接口访问成员
	int ReadID();
	const char *ReadName();
private:
	int id;
	std::string name;
	double scores[3];

	void SetScore(double, int);                          //将main的输入设置给分数
};

