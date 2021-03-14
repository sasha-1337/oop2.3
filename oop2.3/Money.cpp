#include "Money.h"

Money::Money()
{
	g1000 = 0;
	g500 = 0;
	g200 = 0;
	g100 = 0;
	g50 = 0;
	g20 = 0;
	g10 = 0;
	g5 = 0;
	g2 = 0; 
	g1 = 0;
	c50 = 0;
	c10 = 0;
}
Money::Money(double gg1000, double gg500, double gg200, double gg100, double gg50, double gg20, double gg10, double gg5, double gg2, double gg1, double cc50, double cc10)
{
	g1000 = gg1000;
	g500 = gg500;
	g200 = gg200;
	g100 = gg100;
	g50 = gg50;
	g20 = gg20;
	g10 = gg10;
	g5 = gg5;
	g2 = gg2;
	g1 = gg1;
	c50 = cc50;
	c10 = cc10;
}
Money::Money(const Money& r)
{
	g1000 = r.g1000;
	g500 = r.g500;
	g200 = r.g200;
	g100 = r.g100;
	g50 = r.g50;
	g20 = r.g20;
	g10 = r.g10;
	g5 = r.g5;
	g2 = r.g2;
	g1 = r.g1;
	c50 = r.c50;
	c10 = r.c10;
}
Money::~Money() { }

bool Money::Init(double gg1000, double gg500, double gg200, double gg100, double gg50, double gg20, double gg10, double gg5, double gg2, double gg1, double cc50, double cc10)
{
	if (gg1000 > 0)
	{
		SetG1000(gg1000);
		return true;
	}
	else
		return false;
	if (gg500 > 0)
	{
		SetG500(gg500);
		return true;
	}
	else
		return false;
	if (gg200 > 0)
	{
		SetG200(gg200);
		return true;
	}
	else
		return false;
	if (gg100 > 0)
	{
		SetG100(gg100);
		return true;
	}
	else
		return false;
	if (gg50 > 0)
	{
		SetG50(gg50);
		return true;
	}
	else
		return false;
	if (gg20 > 0)
	{
		SetG20(gg20);
		return true;
	}
	else
		return false;
	if (gg10 > 0)
	{
		SetG10(gg10);
		return true;
	}
	else
		return false;
	if (gg5 > 0)
	{
		SetG5(gg5);
		return true;
	}
	else
		return false;
	if (gg2 > 0)
	{
		SetG2(gg2);
		return true;
	}
	else
		return false;
	if (gg1 > 0)
	{
		SetG1(gg1);
		return true;
	}
	else
		return false;
	if (cc50 > 0)
	{
		SetC50(cc50);
		return true;
	}
	else
		return false;
	if (cc10 > 0)
	{
		SetC10(cc10);
		return true;
	}
	else
		return false;
}

Money& Money::operator = (const Money& r)
{
	g1000 = r.g1000;
	g500 = r.g500;
	g200 = r.g200;
	g100 = r.g100;
	g50 = r.g50;
	g20 = r.g20;
	g10 = r.g10;
	g5 = r.g5;
	g2 = r.g2;
	g1 = r.g1;
	c50 = r.c50;
	c10 = r.c10;
	return *this;
}

istream& operator >> (istream& in, Money& a)
{
	do {
		cout << " 1000 - ? "; in >> a.g1000;
		cout << " 500 - ? "; in >> a.g500;
		cout << " 200 - ? "; in >> a.g200;
		cout << " 100 - ? "; in >> a.g100;
		cout << " 50 - ? "; in >> a.g50;
		cout << " 20 - ? "; in >> a.g20;
		cout << " 10 - ? "; in >> a.g10;
		cout << " 5 - ? "; in >> a.g5;
		cout << " 2 - ? "; in >> a.g2;
		cout << " 1 - ? "; in >> a.g1;
		cout << " 0.50 - ? "; in >> a.c50;
		cout << " 0.10 - ? "; in >> a.c10;
		if (!a.Init(a.g1000, a.g500, a.g200, a.g100, a.g50, a.g20, a.g10, a.g5, a.g2, a.g1, a.c50, a.c10))
		{
			cout << endl << " Error! Enter right number. " << endl;
		}
		cout << endl;
	} while (!a.Init(a.g1000, a.g500, a.g200, a.g100, a.g50, a.g20, a.g10, a.g5, a.g2, a.g1, a.c50, a.c10));
	cout << endl;
	return in;
}

Money::operator string () const
{
	stringstream sstr;
	sstr << " 1000 - " << g1000 * 1000. << endl;
	sstr << " 500 - " << g500 * 500. << endl;
	sstr << " 200 - " << g200 * 200. << endl;
	sstr << " 100 - " << g100 * 100. << endl;
	sstr << " 50 - " << g50 * 50. << endl;
	sstr << " 20 - " << g20 * 20. << endl;
	sstr << " 10 - " << g10 * 10. << endl;
	sstr << " 5 - " << g5 * 5. << endl;
	sstr << " 2 - " << g2 * 2. << endl;
	sstr << " 1 - " << g1 * 1. << endl;
	sstr << " 0.50 - " << c50 * 0.5 << endl;
	sstr << " 0.10 - " << c10 * 0.1 << endl;
	return sstr.str();
}

ostream& operator << (ostream& out, const Money& r)
{
	out << string(r);
	return out;
}

double Money::get_sum()
{
	return (g1000 * 1000. + g500 * 500. + g200 * 200. + g100 * 100. + g50 * 50. +
		g20 * 20. + g10 * 10. + g5 * 5. + g2 * 2. + g1 * 1. + c50 * 0.50 + c10 * 0.1);
}

void Money::Comparison(Money& sum1, Money& sum2)
{
	if (sum1.get_sum() > sum2.get_sum()) { cout << " SUMM_1 > SUMM_2 " << endl; }
	else
		if (sum1.get_sum() < sum2.get_sum()) { cout << " SUMM_1 < SUMM_2 " << endl; }
		else
			if (sum1.get_sum() == sum2.get_sum()) { cout << " SUMM_1 = SUMM_2 " << endl; }
}

void Money::Divide(Money& sum1, Money& sum2)
{
	if (sum1.get_sum() >= sum2.get_sum())
	{
		cout << " DIVIDE = " << setprecision(3) << sum1.get_sum() / sum2.get_sum() << endl;
	}
	else
		if (sum1.get_sum() <= sum2.get_sum())
		{
			cout << " DIVIDE = " << setprecision(3) << sum2.get_sum() / sum1.get_sum() << endl;
		}
}