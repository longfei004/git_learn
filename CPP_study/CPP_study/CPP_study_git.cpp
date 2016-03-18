#include <iostream>
#include <string>
#include "math.h"
using namespace std;

struct Sales_data
{
	string booknum;
	unsigned price = 0;
	unsigned sale_num = 0;
};

int main()
{
	Sales_data total;
	if (cin >> total.booknum >> total.price >> total.sale_num)
	{
		Sales_data temp;
		while (cin >> temp.booknum >> temp.price >> temp.sale_num)
		{
			if (total.booknum == temp.booknum)
			{
				total.price += temp.price;
				total.sale_num += temp.sale_num;
			}
			else
			{
				cout << total.sale_num << " " << total.price << " " << total.price / total.sale_num << endl;
				total.booknum = temp.booknum;
				total.price = temp.price;
				total.sale_num = temp.sale_num;
			}
		}
		cout << total.sale_num << " " << total.price << " " << total.price / total.sale_num << endl;
	}
	else
	{
		cerr << "no datas!!!" << endl;

		return -1;
	}

	return 0;
}
