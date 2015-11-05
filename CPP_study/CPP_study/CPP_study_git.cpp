#include<iostream>
using namespace std;     //声明使用命名空间std中的名字

int main()
{
	/****************变量区*****************/
	int v1,v2 = 0;
	int temp = 0;
	/****************程序区*****************/
	cout << "Enter Two Numbers:" << endl;
	cin >> v1 >> v2;
	if(v1 > v2)
	{ 
		temp = v1;
		v1 = v2;
		v2 = temp;
	}
	temp = v1;
    cout << "the resut is: " << endl;
	while (temp <= v2)
	{
		cout << temp << endl;
		++temp;
	}
	
	return 0;
}