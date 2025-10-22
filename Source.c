#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int months;

    printf("Введите возраст в месяцах (1-60): ");
    scanf("%d", &months);

    int years = months / 12;
    int rem_months = months % 12;

    char* year_forms[] = { "лет", "год", "года" };
    char* month_forms[] = { "месяцев", "месяц", "месяца" };

    int year_form = (years == 1) ? 1 : (years >= 2 && years <= 4) ? 2 : 0;
    int month_form = (rem_months == 1) ? 1 : (rem_months >= 2 && rem_months <= 4) ? 2 : 0;

    printf("Возраст: ");

    printf("%d %s", years, year_forms[year_form]);

    printf(" и ");

    printf("%d %s", rem_months, month_forms[month_form]);

    return 0;
}