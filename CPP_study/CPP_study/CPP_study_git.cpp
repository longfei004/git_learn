#include<iostream>
using namespace std;     //����ʹ�������ռ�std�е�����

int main()
{
	/****************������*****************/
	int v1,v2 = 0;
	int temp = 0;
	/****************������*****************/
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