#include <stdio.h>
#include <math.h>

int main() {
    int p;
    printf("Введіть кількість розрядів p (p ≤ 30): ");
    scanf("%d", &p);
    
    if (p <= 0 || p > 30) {
        printf("Некоректне значення p. Воно повинно бути в діапазоні від 1 до 30.\n");
        return 1;
    }
    
    long long totalNumbers = pow(2, p);
    
    int threeSameAdjacent = p - 2;
    
    long long result = totalNumbers - threeSameAdjacent;
    
    printf("Кількість чисел із %d розрядів, в яких три однакові цифри не стоять поруч: %lld\n", p, result);
    
    return 0;
}


