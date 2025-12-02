#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int months;

    printf("Введите возраст в месяцах (1-60): ");
    scanf("%d", &months);

    int years = months / 12;
    int remaining_months = months % 12;
    int case_selector = 0;

    if (years > 0) case_selector += 1;
    if (remaining_months > 0) case_selector += 2;

    // Вывод лет
    switch (years) {
    case 1: printf("1 год"); break;
    case 2: printf("2 года"); break;
    case 3: printf("3 года"); break;
    case 4: printf("4 года"); break;
    case 5: printf("5 лет"); break;
    default:
        if (years > 5) printf("%d лет", years);
        break;
    }

    switch (case_selector) {
    case 3: printf(" и "); break; 
    }

    switch (remaining_months) {
    case 1: printf("1 месяц"); break;
    case 2: printf("2 месяца"); break;
    case 3: printf("3 месяца"); break;
    case 4: printf("4 месяца"); break;
    case 5: printf("5 месяцев"); break;
    case 6: printf("6 месяцев"); break;
    case 7: printf("7 месяцев"); break;
    case 8: printf("8 месяцев"); break;
    case 9: printf("9 месяцев"); break;
    case 10: printf("10 месяцев"); break;
    case 11: printf("11 месяцев"); break;
    }

    printf("\n");
    return 0;
}