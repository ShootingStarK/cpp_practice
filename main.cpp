#include <iostream>

using namespace std;

void drawMainScreen(void);
void drawSpecificScreen(int num);

typedef struct Customer
{
	int account;
	char name[10];
	int money;
}Customer;

Customer arr[100];
int customer_num = 0;

int main(void)
{
	while (1)
	{
		drawMainScreen();
		int num;
		cin >> num;
		drawSpecificScreen(num);
	}
	return 0;
}

void drawMainScreen(void)
{
	cout << "-----Menu" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4.계좌정보 전체 출력" << endl;
	cout << "5.프로그램 종료" << endl;
	cout << "선택: " << endl;
}

void drawSpecificScreen(int num)
{
	switch (num)
	{
	case 1:
		cout << "[계좌개설]" << endl;
		cout << "계좌ID: " << endl;
		cin >> arr[customer_num].account;
		cout << "이 름: " << endl;
		cin >> arr[customer_num].name;
		cout << "입금액: " << endl;
		cin >> arr[customer_num++].money;
		break;
	case 2:
		cout << "[입   금]" << endl;
		cout << "계좌ID: " << endl;
		int acnum;
		cin >> acnum;
		cout << "입금액: " << endl;
		int inmoney;
		cin >> inmoney;
		cout << "입금완료" << endl;
		for (int j = 0;j < customer_num;j++)
		{
			if (arr[j].account == acnum)
				arr[j].money += inmoney;
		}
		break;
	case 3:
		cout << "[출   금]" << endl;
		cout << "계좌ID: " << endl;
		int acnum2;
		cin >> acnum2;
		cout << "출금액: " << endl;
		int withmoney;
		cin >> withmoney;
		cout << "출금완료" << endl;
		for (int k = 0;k < customer_num;k++)
		{
			if (arr[k].account == acnum2)
				arr[k].money -= withmoney;
		}
		break;
	case 4:
		for (int a = 0;a < customer_num;a++)
		{
			cout << "계좌ID: " << arr[a].account << endl;
			cout << "이 름: " << arr[a].name << endl;
			cout << "잔 액: " << arr[a].money << endl;
		}
		break;
	case 5:
		exit(0);
	}
}