#include "Money.h"
int main()
{
	Money sum1;
	Money sum2;
	Money x;

	cout << " -------- FIRST SUMM -------- " << endl;
	cin >> sum1;
	cout << " -------- SECOND SUMM -------- " << endl;
	cin >> sum2;

	cout << " -------- FIRST SUMM -------- " << endl;
	cout << sum1;
	cout << " TOTAL - " << sum1.get_sum() << endl << endl;

	cout << " -------- SECOND SUMM -------- " << endl;
	cout << sum2;
	cout << " TOTAL - " << sum2.get_sum() << endl << endl;

	x.Comparison(sum1, sum2);
	x.Divide(sum1, sum2);

	return 0;
}