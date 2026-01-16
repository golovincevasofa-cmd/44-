#include <stdio.h>
#include <Windows.h>
#include <locale.h>

//Задача 9.1.1 - Факториал 111
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}


// Задача 2.268:
void f1(int n) {
    printf("%d ", n);
    if (n > 1) {
        f1(n - 2);
    }
}

// Задача 2.3555:
void f2(int n) {
    if (n > 1) {
        f2(n - 2);
    }
    printf("%d ", n);
}

// Задача 2.3: 
void f3(int n) {
    printf("%d ", n);
    if (n > 1) {
        f3(n - 2);
        printf("%d ", n);
    }
}

//Задача 9.1.5 (ЕГЭ 2017) 
void F1(int n) {
    if (n > 2) {
        printf("%d\n", n);
        F1(n - 3);
        F1(n - 4);
    }
}

// Задача 9.1.6 (ЕГЭ 2015) 
void F2(int n) {
    printf("%d\n", n);
    if (n < 5) {
        F2(n + 1);
        F2(n + 3);
    }
}

// Задача 9.1.7 (ЕГЭ 2016) 
void G3(int n);

void F3(int n) {
    if (n > 0) {
        G3(n - 1);
    }
}

void G3(int n) {
    printf("*");
    if (n > 1) {
        F3(n - 3);
    }
}

//Примеры из задания 
void rec1(int n) {
    printf("%d", n);
    if (n > 1) {
        rec1(n - 1);
    }
}

void rec2(int n) {
    if (n > 1) {
        rec2(n - 1);
    }
    printf("%d", n);
}

void rec3(int n) {
    printf("%d", n);
    if (n > 1) {
        rec3(n - 1);
    }
    printf("%d", n);
}

//Задача 9.1.9 - Вариант 4
// <*<*<*<*<*1*>2*>3*>4*>5*>
void f_variant4(int n) {
    if (n == 1) {
        printf("<*1*>");
        return;
    }
    printf("<*");
    f_variant4(n - 1);
    printf("%d*>", n);
}

int main() {

    setlocale(LC_ALL, "Russian");

    printf(" Задача 9.1.1 - Факториал \n");
    printf("Факториал 5 = %d\n\n", factorial(5));

    printf(" Задача 9.1.2 - Рекурсивные функции \n");

    printf("f1(11): ");
    f1(11);
    printf("\n");

    printf("f2(11): ");
    f2(11);
    printf("\n");

    printf("f3(11): ");
    f3(11);
    printf("\n\n");

    printf("Примеры из задания\n");
    printf("rec1(3): ");
    rec1(3);
    printf("\n");

    printf("rec2(3): ");
    rec2(3);
    printf("\n");

    printf("rec3(3): ");
    rec3(3);
    printf("\n\n");

    printf("Задача 9.1.5 (ЕГЭ 2017) \n");
    printf("F1(10) выведет числа:\n");
    F1(10);
    printf("\n");

    printf(" Задача 9.1.6 (ЕГЭ 2015) \n");
    printf("F2(1) выведет числа:\n");
    F2(1);
    printf("\n");

    printf("Задача 9.1.7 (ЕГЭ 2016) \n");
    printf("F3(11) выведет звездочки: ");
    F3(11);
    printf("\n\n");

    printf("Задача 9.1.9 - Вариант 4 \n");
    printf("f_variant4(5): ");
    f_variant4(5);
    printf("\n");
    printf("Ожидаемый результат: <*<*<*<*<*1*>2*>3*>4*>5*>\n");

    return 0;
}