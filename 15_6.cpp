#include <stdio.h>
#include <locale.h>
int main() {
    // Оголошення масиву та змінних
    int array[10];
    setlocale(LC_ALL, "ukr");
    // Запит користувача для введення елементів масиву
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < 10; ++i) {
        printf("element[%d]: ", i);
        scanf_s("%d", &array[i]);
    }
    // Знаходження максимального та мінімального значень
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
    // Виведення результату
    printf("Максимальне значення в масиві: %d\n", max);
    printf("Мінімальне значення в масиві: %d\n", min);
    return 0;
}

