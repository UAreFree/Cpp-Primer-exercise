#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item temp, total;
	if (std::cin >> total) { //读取第一条记录
		int count = 1;
		while (std::cin >> temp) {
			if (temp.isbn() == total.isbn()) {
				//与前一条记录相同
				count++;
			}
			else {
				//与前一条记录不同
				//输出前一条记录
				std::cout << "The counts of " << total << " is " << count << std::endl;
				total = temp;
			}
		}
		//输出最后一条记录
		std::cout << "The counts of " << total << " is " << count << std::endl;
		return 0;
	}
	else {
		std::cout << "没有数据" << std::endl;
		return -1;
	}
}