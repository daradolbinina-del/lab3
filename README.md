# Домашнее задание к работе 3
## Условие задачи
Написать и отладить программу вычисления дохода по вкладу
(Дано: сумма вклада и процентная ставка);
## 1. Алгоритм и блок-схема
### Алгоритм
1. **Начало**
2. Ввод входных данных:
summa — сумма вклада.
stavka — процентная ставка.
3. Вычисление дохода:
dohod = summa * stavka / 100
4. Вывод результата:
printf("Доход по вкладу: %.2f\n", dohod);
5. **Конец**

### Блок-схема
 ![Uploading 2026-01-15 00 17 42.png…]()

## 2. Реализация программы
#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    float summa, stavka, dohod;
    
    printf("Введите сумму вклада: ");
    scanf("%f", &summa);
    
    printf("Введите процентную ставку: ");
    scanf("%f", &stavka);
    
    dohod = summa * stavka / 100;
    
    printf("Доход по вкладу: %.2f\n", dohod);
    
    return 0;
}

## 3. Результаты работы программы
![Uploading 2026-01-15 00 22 35.png…]()







