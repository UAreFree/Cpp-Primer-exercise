#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item total;
	if (std::cin >> total) { //读取第一条记录
		Sales_item trans;
		while (std::cin >> trans) {
			if (trans.isbn() == total.isbn()) {
				//与前一条记录相同
				total += trans;
			}
			else {
				//与前一条记录不同
				//输出前一条记录
				std::cout << total << std::endl;
				total = trans;
			}
		}
		//输出最后一条记录
		std::cout << total << std::endl;
		return 0;
	}
	else {
		std::cerr << "没有数据" << std::endl;
		return -1;
	}
}