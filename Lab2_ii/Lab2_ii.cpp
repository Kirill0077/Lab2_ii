// Lab2_ii.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Web.h"
int main()
{
	Web* w = new(Web);
	string	filename;
	int sizex = 7;
	int sizey = 10;
	w->input = w->weight;
	w->mul = w->weight;
	Studying_era(w, sizex, sizey);
	Weight_input(w->weight);
	cout << "Number of training stages:" << w->count_era << "\n";
	while (1)
	{
		cout << "Input your filename: MAKS_LOH.txt";
		cin >> filename;
		if (filename == "0")
			break;
		ifstream fin(filename);
		if (fin.is_open())
		{
			fill_input(fin, w->input);
			Get_sum(w, sizex, sizey);
			if (w->sum >= w->limit)
				cout << "sum =" << w->sum << " >= " << w->limit << endl
				<< "Yes!\n";
			else
				cout << "sum =" << w->sum << " < " << w->limit << endl
				<< "No!\n";
			fin.close();
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
