#include<iostream>
using namespace std;     //����ʹ�������ռ�std�е�����

int main()
{
	/****************������*****************/
	int currval,val = 0;
	/****************������*****************/
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