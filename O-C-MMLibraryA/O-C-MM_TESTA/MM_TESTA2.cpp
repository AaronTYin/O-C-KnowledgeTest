#include <iostream>
#include <string>			//һ��Ҫ����stringͷ�ļ�������string������
using namespace std;


#define code "12345"
int main()
{
//	char codde;
	string codde;			//ע��Ϊstring������char
	cout<<"Please input:";
	cin>>codde;
	if(codde==code)			//string����ֱ���õȺŶԱ�
		cout<<"Success!"<<endl;
	else
		cout<<"Failed!"<<endl;

	getchar();
	getchar();

	return 0;
}
