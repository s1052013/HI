#include <iostream>
#include <iomanip> 

using namespace std;
int main()
{
	char a;
	int Number;
	double Fight;
	cout << "�п�J�Ǹ�(�^��p�g�A�Ǹ�7���)" << endl;
	cin >> a >> Number;
	cout << "�п�J�԰��O" << endl;
	cin >> Fight;
	a -= 32;
	Fight *= 1.5;
	cout << "�ק��Ǹ�:" << a << setfill('0') << setw(3) << Number - Number / 1000 * 1000 << endl;
	cout << "�ק��԰��O:" << fixed << setprecision(3) << Fight << endl;
	system("pause");

}
