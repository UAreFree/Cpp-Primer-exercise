#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item temp, total;
	if (std::cin >> total) { //��ȡ��һ����¼
		while (std::cin >> temp) {
			if (temp.isbn() == total.isbn()) {
				//��ǰһ����¼��ͬ
				total += temp;
			}
			else {
				//��ǰһ����¼��ͬ
				//���ǰһ����¼
				std::cout << total << std::endl;
				total = temp;
			}
		}
		//������һ����¼
		std::cout << total << std::endl;
		return 0;
	}
	else {
		std::cout << "û������" << std::endl;
		return -1;
	}
}