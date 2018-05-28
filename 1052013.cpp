#include <iostream>
#include <iomanip> 

using namespace std;
int main()
{
	char a;
	int Number;
	double Fight;
	cout << "請輸入學號(英文小寫，學號7位數)" << endl;
	cin >> a >> Number;
	cout << "請輸入戰鬥力" << endl;
	cin >> Fight;
	a -= 32;
	Fight *= 1.5;
	cout << "修改後學號:" << a << setfill('0') << setw(3) << Number - Number / 1000 * 1000 << endl;
	cout << "修改後戰鬥力:" << fixed << setprecision(3) << Fight << endl;
	system("pause");

}
