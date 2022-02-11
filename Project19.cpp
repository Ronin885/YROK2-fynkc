
using namespace std;
#include <iostream>
// задание 3
/*void rectangle(int x, int y) {
	for (int i = 1; i <= x; i++)
	{
		
		for (int j = 1; j < y; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}//return(x, y);
}

void main()
{
	setlocale(LC_ALL, "rus");
	int k = 10, n = 15;
	
	cout << "Прямоугольник >>> "  << endl;

	rectangle(k, n);
	
}*/
// задание 4
void num(int x, int y) {
	for (int i = 1; i <= x; i++) {
		y = y * i;
		cout << y << endl;
	}//return 1;
}
void num1(int x);
void main()
{
	setlocale(LC_ALL, "rus");
	int n = 5, k = 1; 
	num1(5);
	//cout << "Факториал >>>" <<endl;
	//num(n, k);

}
// задание 5
void num1(int x) {
	int count = 0;
	setlocale(LC_ALL, "rus");
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
			count++;
	}
	if (count > 2)
		cout << x << " не простое" << endl;
	else
		cout << "Прост";
}
