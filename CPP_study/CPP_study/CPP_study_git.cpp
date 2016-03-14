#include <iostream>
#include "Sales_item.h"
#include "math.h"
using namespace std;

struct Sales_data
{
	string bookname;
	string booknum;
	unsigned price = 0;
	unsigned sale_num = 0;
};

int main()
{
	Sales_data Cpp_primer;
	Cpp_primer.bookname = "cppprimer";
	Cpp_primer.booknum = "0000001";
	Cpp_primer.price = 128;
	Cpp_primer.sale_num = 100;

	return 0;
}
