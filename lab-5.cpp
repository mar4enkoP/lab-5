#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void TaskVariant()
{
	//подсчет варианта
	int K, N, Z;
	K = 0;
	N = 0;
	cout << "Variant:\n";
	cin >> N;
	for (K = 1; K <= 8; K++)
	{
		Z = (N + (K - 1) * 30) + 5;
		cout << "Z(" << K << ") = " << Z;
		cout << "\n\n";
	}
	cout << "\n\n";
}
void Task16()
{
	//Распечатать в «столбик» таблицу умножения на 9.
	int i, n;
	n = 9;
	for (i = 1; i <= 10; i++)
	{
		cout << i << " * 9 = " << n * i << "\n";
	}
}
void Task46()
{
	//Найти:
	//	а) сумму квадратов всех целых чисел от 10 до 50;
	//	б) сумму квадратов всех целых чисел от а до 50 (значение а вводится с клавиатуры; а ≤ 50);
	//	в) сумму квадратов всех целых чисел от a до b(значение b вводится с клавиатуры; b ≥ –10);
	//	г) сумму квадратов всех целых чисел от а до b(значения а и b вводятся с клавиатуры; b ≥ а).
	//1
	int  b, a, ans;
	ans = 0;
	for (a = 10; a <= 50; a++)
	{
		ans += pow(a, 2);
	}
	cout << "1) " << ans << endl;
	//2
	a = 0;
	ans = 0;
	cout << "Enter number( <= 50)\n";
	cin >> a;
	if (a <= 50)
	{
		for (a; a <= 50; a++)
		{
			ans += pow(a, 2);
		}
		cout << "2) " << ans << endl;
	}
	//3
	ans = 0;
	a = -5;
	b = 0;
	cout << "Enter number( >= -10)\n";
	cin >> b;
	if (b >= -10)
	{
		for (a; a <= b; a++)
		{
			ans += pow(a, 2);
		}
		cout << "3) " << ans << endl;
	}
	//4
	ans = 0;
	a = 0;
	b = 0;
	cout << "Enter number a ( b >= a)\n";
	cin >> a;
	cout << "Enter number b ( b >= a)\n";
	cin >> b;
	if (b >= a)
	{
		for (a; a <= b; a++)
		{
			ans += pow(a, 2);
		}
		cout << "4) " << ans << endl;
	}
	cout << "\n\n";
}
void Task76()
{
	//Дано натуральное число n, вычислить: 1) 1/sin1 + 1/sin1+sin2 + 1/sin1+sin2+...+sinn
	//                                     2) cos1/sin1 + cos1+cos2/sin1+sin2 + /sin1+sin2+...+sinn
	int i, n, a;
	double den, ans, num, frac;
	ans = 0;
	den = 0;
	i = 0;
	cout << "Enter number: ";
	cin >> n;
	//1
	for (i = 1; i <= n; i++)
	{
		for (int a = 0; a < i; a++)
		{
			den += sin(i);
		}
		ans += 1 / den;
		den = 0;
	}
	cout << "1) " << ans << endl;
	//2
	ans = 0;
	den = 0;
	num = 0;
	i = 0;
	for (i = 1; i <= n; i++)
	{
		for (int a = 0; a < i; a++)
		{
			den += sin(i);
			num += cos(i);
			frac = num / den;
		}
		ans += frac;
		den = 0;

	}
	cout << "2) " << ans << endl;
}
void Task106()
{
	//  Дана непустая последовательность натуральных чисел, за которой следует 0. Составить программу поиска в данной
	//	непустой последовательности порядкового номера наибольшего элемента.
	int max, n;
	const int size = 10;
	int mas[size];
	for (int i = 0; i < 9; ++i)
	{
		mas[i] = 1 + rand() % 100;
		cout << i << ") " << mas[i] << endl;
	}
	mas[size - 1] = 0;
	cout << size - 1 << ") " << mas[size - 1] << endl;
	//min
	int Max = mas[0];
	for (int i = 1; i < size; i++)
	{
		if (mas[i] > Max) { Max = mas[i]; n = i; }
	}
	cout << "Max: (" << n << ") = " << Max << endl;
}
void Task136()
{
	//136.Какими цифрами следует заменить а и b, чтобы выполнялось уравнение (а + а) + 3(b + b) = а^a + b^b?
	int a, b;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a + a) + 3 * (b + b) == pow(a, a) + pow(b, b))
			{
				cout << "a :" << a << "\nb : " << b << endl;
			}
		}
	}
}
void Task166()
{
	//Дано натуральное число.Найти его наименьший делитель, отличный от 1 (если таковой имеется).
	int n;
	cout << "Enter number: ";
	cin >> n;
	for (int i = 2; i <= n; i++)
		if (n % i == 0)
		{
			cout << i << "\n";
			return;
		}
	cout << "\n\n";
}
void Task196()
{
	//В водоёме 100 тонн рыбы.Каждый год рыболовецкая бригада вылавливает 15 тонн.Воспроизводство рыбы 5 % в год.
	//Для сохранения воспроизводства необходимо прекращать лов, когда в водоёме её остаётся менее 5 тонн.Через
	//сколько лет лов рыбы должен быть прекращён ?
	int fish, catcYear, reproduction, i;
	fish = 100;
	catcYear = 15;


	for (i = 1; fish > 5; i++)
	{
		reproduction = fish * 0.05;
		fish += reproduction;
		fish -= catcYear;
	}
	cout << "in " << i << " year\n";

}
void Task226()
{
	//составить программу для вычисления значений функции F(x)=2cos-1 на отрезке[a, b] с шагом h.
	//Результат представить в виде таблицы, первый столбец которой — значения аргумента, второй —
	//соответствующие значения функции.
	double a, b, h;
	cout << "Enter a:\n";
	cin >> a;
	cout << "Enter b:\n";
	cin >> b;
	cout << "Enter h:\n";
	cin >> h;
	cout << "F(x) = 2cos-1" << endl;
	for (double i = a; i <= b; i += h)
	{
		cout << "F(" << i << ") = " << 2 * sin(i) - 1 << endl;
	}
}

int main()
{
	int Num, i;
	for (i = 0; i <= 8; i++)
	{
		cout << "chose 16, 46, 76, 106, 136, 166, 196, 226: ";
		cin >> Num;
		switch (Num)
		{
		case 16:
			Task16();
			break;
		case 46:
			Task46();
			break;
		case 76:
			Task76();
			break;
		case 106:
			Task106();
			break;
		case 136:
			Task136();
			break;
		case 166:
			Task166();
			break;
		case 196:
			Task196();
			break;
		case 226:
			Task226();
			break;
		case 000:
			TaskVariant();
			break;

		default:
			break;
		}
	}
}