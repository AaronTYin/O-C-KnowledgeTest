#include <iostream>
using namespace std;

class Menu
{
public:
	int CH;
	void MenuWHOLE()
	{
		system("cls");
		cout<<"\n\t\tWelcome to this AutoSell Systrem!"<<endl;
		cout<<"\t\tPlease chose the kind what you want to buy:"<<endl;
		cout<<"\t\t1.Vegetables."<<endl;
		cout<<"\t\t2.Fruits."<<endl;
		cout<<"\t\t0.Exit."<<endl;
	}
	~Menu(){};
	void SWITCH(int CH)
	{
		system("cls");
		switch(CH)
		{
		case 1:
			{
				cout<<"This is your vegetable!"<<endl;
				getchar();
				getchar();
				break;
			}
		case 2:
			{
				cout<<"This is your fruit!"<<endl;
				getchar(); 
				getchar();
				break;
			}
		default:
			{
				cout<<"Can't find your choise!Please input again!"<<endl;
				getchar();
				getchar();
				system("cls");
				break;
			}
		}
	}
};
