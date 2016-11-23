#pragma once
#include <string>
#include <vector>

class CMyMenu
{
public:
	CMyMenu();
	~CMyMenu();
	void AddItem(const char *);
	int Choose();
private:
	std::vector <std::string> item;
	std::string prompt;
};

