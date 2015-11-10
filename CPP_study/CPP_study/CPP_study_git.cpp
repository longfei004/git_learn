#include<iostream>
using namespace std;     //声明使用命名空间std中的名字

int main()
{
	/****************变量区*****************/
	int currval,val = 0;
	/****************程序区*****************/
	cout << "Enter  Numbers:" << endl;
	if (cin >> currval)
	{
		int cnt = 1;
		while (cin >> val)
		{
			if (val == currval)
				cnt++;
			else
			{
				cout << currval << " occurs " << cnt << " times" << endl;
				currval = val;
				cnt = 1;
			}
		}
		cout << currval << " occurs " << cnt << " times" << endl;
	}
    
	return 0;
}