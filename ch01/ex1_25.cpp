#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item total;
	if (std::cin >> total) { //��ȡ��һ����¼
		Sales_item trans;
		while (std::cin >> trans) {
			if (trans.isbn() == total.isbn()) {
				//��ǰһ����¼��ͬ
				total += trans;
			}
			else {
				//��ǰһ����¼��ͬ
				//���ǰһ����¼
				std::cout << total << std::endl;
				total = trans;
			}
		}
		//������һ����¼
		std::cout << total << std::endl;
		return 0;
	}
	else {
		std::cerr << "û������" << std::endl;
		return -1;
	}
}