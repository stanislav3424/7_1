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
    std::cout << "������� � ������ ����������";
#elif MODE == 1
    int num1, num2;
    std::cout << "������� � ������ ������" << std::endl;
    std::cout << "������� ����� 1: ";
    std::cin >> num1;
    std::cout << "������� ����� 2: ";
    std::cin >> num2;
    std::cout << "��������� ��������: ";
    std::cout << add(num1, num2);
#else
    std::cout << "����������� �����. ���������� ������";
#endif

    return 0;
}