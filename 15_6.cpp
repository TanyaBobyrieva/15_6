#include <stdio.h>
#include <locale.h>
int main() {
    // ���������� ������ �� ������
    int array[10];
    setlocale(LC_ALL, "ukr");
    // ����� ����������� ��� �������� �������� ������
    printf("������ �������� ������:\n");
    for (int i = 0; i < 10; ++i) {
        printf("element[%d]: ", i);
        scanf_s("%d", &array[i]);
    }
    // ����������� ������������� �� ���������� �������
    int max = array[0];
    int min = array[0];
    for (int i = 1; i < 10; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }
    // ��������� ����������
    printf("����������� �������� � �����: %d\n", max);
    printf("̳������� �������� � �����: %d\n", min);
    return 0;
}

