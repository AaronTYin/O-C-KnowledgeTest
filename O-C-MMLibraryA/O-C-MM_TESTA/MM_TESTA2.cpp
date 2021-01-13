#include <iostream>
#include <string>			//一定要包含string头文件（声明string变量）
using namespace std;


#define code "12345"
int main()
{
//	char codde;
	string codde;			//注意为string而不是char
	cout<<"Please input:";
	cin>>codde;
	if(codde==code)			//string可以直接用等号对比
		cout<<"Success!"<<endl;
	else
		cout<<"Failed!"<<endl;

	getchar();
	getchar();

	return 0;
}
