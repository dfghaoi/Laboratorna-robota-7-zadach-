#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x;

    cout << "Працює інформаційна система факультету прикладної математики:\n";
    cout << "1. Новини дня\n";
    cout << "2. Анекдот тижня\n";
    cout << "3. Автор\n";
    cout << "Введіть відповідний номер і натисніть ENTER:\n";

    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Новини дня: Сьогодні без прильотів!)))\n";
        break;

    case 2:
        cout << "Анекдот тижня: Чому програмісти люблять осінь? Бо падає листя, а не сервери!\n";
        break;

    case 3:
        cout << "Автор: Шевченко Кирило Сергійович, студент ПА-25у-1.\n";
        break;

    default:
        cout << "Невірний вибір. Будь ласка, спробуйте ще раз.\n";
        break;
    }

    return 0;
}