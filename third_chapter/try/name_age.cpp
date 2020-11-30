#include <iostream>
#include <string>

int main()
{
	std::cout << "请输入姓名和年龄:";
	std::string name;
	double age;
	std::cin >> name >> age;
	std::cout << "姓名是：" << name << "，年龄是：" << age * 12 << "（月份）\n";
	return 0;
}
