#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
    while (true)
    {
        std::cout << "\n�������� �������� ����� ����� ��������������� �����: \n1)�������� \n2)��������� ";
        std::cout << "\n3)��������� \n4)������� \n5)���������� � ������� \n6)���������� ����������� �����";
        std::cout << "\n7)���������� 1 �������� �� ����� \n8)���������� ���������� \n9)����� �� ���������\n";
        double x, a, s, d;
        std::cin >> x;
        if (x == 1)
        {
            std::cout << "������� ������ ��������� ";
            std::cin >> a;
            std::cout << "������� ������ ��������� ";
            std::cin >> s;
            int d = a + s;
            std::cout << "�����: ";
            std::cout << d;
        }
        if (x == 2)
        {
            std::cout << "������� ����������� ";
            std::cin >> a;
            std::cout << "������� ���������� ";
            std::cin >> s;
            int d = a - s;
            std::cout << "�����: ";
            std::cout << d;
        }
        if (x == 3)
        {
            std::cout << "������� ������ ��������� ";
            std::cin >> a;
            std::cout << "������� ������ ��������� ";
            std::cin >> s;
            int d = a * s;
            std::cout << "�����: ";
            std::cout << d;
        }
        if (x == 4)
        {
            std::cout << "������� ������� ";
            std::cin >> a;
            std::cout << "������� �������� ";
            std::cin >> s;
            double d = a / s;
            std::cout << "�����: ";
            std::cout << d;
        }
        if (x == 5)
        {
            std::cout << "������� ����� ";
            std::cin >> a;
            std::cout << "������� ������� ";
            std::cin >> s;
            double d = pow(a, s);
            std::cout << "�����: ";
            std::cout << d;
        }
        if (x == 6)
        {
            std::cout << "������� ����� ";
            std::cin >> a;
            double d = sqrt(a);
            std::cout << "�����: ";
            std::cout << d;
        }
        if (x == 7)
        {
            std::cout << "������� ����� ";
            std::cin >> a;
            double d = a / 100;
            std::cout << "�����: ";
            std::cout << d;
        }
        if (x == 8)
        {
            std::cout << "������� ����� ";
            std::cin >> a;
            int g = a - 1;
            for (int i = g; i > 1; i--)
            {
                a = a * i;
            }
            std::cout << "�����: ";
            std::cout << a;
        }
        if (x == 9)
        {
            break;
        }
    }
}

