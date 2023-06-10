#include <iostream>
#include <string>
#include <sstream>
#include <vector>

void _istringstream();
void _find();

void _istringstream()
{
	std::string str = "Today is Saturday June 10th";
	std::istringstream ss(str);
	std::string strbuf;
	std::vector<std::string> v_str;

	while (std::getline(ss, strbuf, ' '))
	{
		v_str.push_back(strbuf);
	}

	for (size_t i = 0; i < v_str.size(); i++)
	{
		std::cout << v_str[i] << std::endl;
	}
}

void _find()
{
	std::string str = "Today is Saturday June 10th";
	std::vector<std::string> v_str;

	int pre = 0;
	int cur = 0;

	cur = str.find(" ");
	while (cur != std::string::npos)
	{
		std::string strbuf;
		strbuf = str.substr(pre, cur - pre);
		v_str.push_back(strbuf);

		pre = cur + 1;
		cur = str.find(" ", pre);
	}

	for (size_t i = 0; i < v_str.size(); i++)
	{
		std::cout << v_str[i] << std::endl;
	}
}

int main()
{
	_istringstream();
	_find();

	return 0;
}