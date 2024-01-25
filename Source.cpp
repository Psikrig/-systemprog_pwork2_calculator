#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
    while (true)
    {
        std::cout << "\nВыберите действие путем ввода соответствующей цифры: \n1)Сложение \n2)Вычитание ";
        std::cout << "\n3)Умножение \n4)Деление \n5)Возведение в степень \n6)Нахождение квадратного корня";
        std::cout << "\n7)Нахождение 1 процента от числа \n8)Нахождение факториала \n9)Выход из программы\n";
        double x, a, s, d;
        std::cin >> x;
        if (x == 1)
        {
            std::cout << "введите первое слогаемое ";
            std::cin >> a;
            std::cout << "введите второе слогаемое ";
            std::cin >> s;
            int d = a + s;
            std::cout << "ответ: ";
            std::cout << d;
        }
        if (x == 2)
        {
            std::cout << "введите уменьшаемое ";
            std::cin >> a;
            std::cout << "введите вычитаемое ";
            std::cin >> s;
            int d = a - s;
            std::cout << "ответ: ";
            std::cout << d;
        }
        if (x == 3)
        {
            std::cout << "введите первый множитель ";
            std::cin >> a;
            std::cout << "введите второй множитель ";
            std::cin >> s;
            int d = a * s;
            std::cout << "ответ: ";
            std::cout << d;
        }
        if (x == 4)
        {
            std::cout << "введите делимое ";
            std::cin >> a;
            std::cout << "введите делитель ";
            std::cin >> s;
            double d = a / s;
            std::cout << "ответ: ";
            std::cout << d;
        }
        if (x == 5)
        {
            std::cout << "введите число ";
            std::cin >> a;
            std::cout << "введите степень ";
            std::cin >> s;
            double d = pow(a, s);
            std::cout << "ответ: ";
            std::cout << d;
        }
        if (x == 6)
        {
            std::cout << "введите число ";
            std::cin >> a;
            double d = sqrt(a);
            std::cout << "ответ: ";
            std::cout << d;
        }
        if (x == 7)
        {
            std::cout << "введите число ";
            std::cin >> a;
            double d = a / 100;
            std::cout << "ответ: ";
            std::cout << d;
        }
        if (x == 8)
        {
            std::cout << "введите число ";
            std::cin >> a;
            int g = a - 1;
            for (int i = g; i > 1; i--)
            {
                a = a * i;
            }
            std::cout << "Ответ: ";
            std::cout << a;
        }
        if (x == 9)
        {
            break;
        }
    }
}

