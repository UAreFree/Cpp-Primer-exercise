#include<iostream>
#include"Sales_item.h"
int main() {
	Sales_item temp, total;
	if (std::cin >> total) { //��ȡ��һ����¼
		int count = 1;
		while (std::cin >> temp) {
			if (temp.isbn() == total.isbn()) {
				//��ǰһ����¼��ͬ
				count++;
			}
			else {
				//��ǰһ����¼��ͬ
				//���ǰһ����¼
				std::cout << "The counts of " << total << " is " << count << std::endl;
				total = temp;
			}
		}
		//������һ����¼
		std::cout << "The counts of " << total << " is " << count << std::endl;
		return 0;
	}
	else {
		std::cout << "û������" << std::endl;
		return -1;
	}
}