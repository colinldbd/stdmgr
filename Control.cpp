#include "Control.h"
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

CControl::CControl()
{
}


CControl::~CControl()
{
}

void CControl::InputStudents()
{
	CStudent t_student;
	vector<string> subjects = {"English","Math","Science"};

	cout << "Student Name:" << endl;
	string t_name;
	cin >> t_name;
	t_student.GetName(t_name.c_str());

	cout << "Student ID:" << endl;
	int t_id;
	cin >> t_id;
	t_student.GetID(t_id);

	for (int i = 0; i < 3; i++) {
		cout << subjects[i] << " Score: " << endl;
		double t_score;
		cin >> t_score;
		t_student.GetScore(t_score, i);
	}
	double *s = t_student.ReadScore();

	thesubject.AddToSubjects(s[0],s[1],s[2]);

	theclass.AddStudent(t_student);
}

void CControl::Check()
{
	cout << "Please enter student ID:" << endl;
	int cid;
	cin >> cid;

	cout << cid << endl;
	if (theclass.CheckStudent(cid)==0) {
		cout << "ID not found." << endl;
	}

	else {
		string p = theclass.GetStudent(cid).ReadName();
		double *s=theclass.GetStudent(cid).ReadScore();

		cout << "Name:  " << p << endl;
		cout << "ID: " << cid << endl;
		cout << "English: " << s[0] << "\tMath: " << s[1] << "\tScience: " << s[2] << endl;
	}
}

void CControl::OutputPassRatio()
{
	thesubject.CountRatio();

	cout << "English pass ratio:  %" << 100 * thesubject.EnglishPassRatio() << endl;
	cout << "Math pass ratio:  %" << 100 * thesubject.MathPassRatio() << endl;
	cout << "Science pass ratio:  %" << 100 * thesubject.SciencePassRatio() << endl;
}
