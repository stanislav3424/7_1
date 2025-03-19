#include <iostream>

#define MODE 1

#if MODE == 1
int add(int num1, int num2)
{
    return num1 + num2;
}
#endif

int main()
{
    setlocale(LC_ALL, "");
#if MODE == 0
    std::cout << "Работаю в режиме тренировки";
#elif MODE == 1
    int num1, num2;
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения: ";
    std::cout << add(num1, num2);
#else
    std::cout << "Неизвестный режим. Завершение работы";
#endif

    return 0;
}