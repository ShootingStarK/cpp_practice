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
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4.�������� ��ü ���" << endl;
	cout << "5.���α׷� ����" << endl;
	cout << "����: " << endl;
}

void drawSpecificScreen(int num)
{
	switch (num)
	{
	case 1:
		cout << "[���°���]" << endl;
		cout << "����ID: " << endl;
		cin >> arr[customer_num].account;
		cout << "�� ��: " << endl;
		cin >> arr[customer_num].name;
		cout << "�Աݾ�: " << endl;
		cin >> arr[customer_num++].money;
		break;
	case 2:
		cout << "[��   ��]" << endl;
		cout << "����ID: " << endl;
		int acnum;
		cin >> acnum;
		cout << "�Աݾ�: " << endl;
		int inmoney;
		cin >> inmoney;
		cout << "�ԱݿϷ�" << endl;
		for (int j = 0;j < customer_num;j++)
		{
			if (arr[j].account == acnum)
				arr[j].money += inmoney;
		}
		break;
	case 3:
		cout << "[��   ��]" << endl;
		cout << "����ID: " << endl;
		int acnum2;
		cin >> acnum2;
		cout << "��ݾ�: " << endl;
		int withmoney;
		cin >> withmoney;
		cout << "��ݿϷ�" << endl;
		for (int k = 0;k < customer_num;k++)
		{
			if (arr[k].account == acnum2)
				arr[k].money -= withmoney;
		}
		break;
	case 4:
		for (int a = 0;a < customer_num;a++)
		{
			cout << "����ID: " << arr[a].account << endl;
			cout << "�� ��: " << arr[a].name << endl;
			cout << "�� ��: " << arr[a].money << endl;
		}
		break;
	case 5:
		exit(0);
	}
}