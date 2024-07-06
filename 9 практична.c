#include <stdio.h>
#include <stdlib.h>

int min_steps(int x, int y){
    if (x == y) return 0;

    int distance = y - x;
    int step = 1;
    int steps = 0;
    int current_position = 0;

    while (current_position < distance)
    {
        steps++;
        current_position += (steps + 1) / 2;
    }

    return steps;
}

int main(){
    int x, y;

    printf("Введіть початкове значення x: ");
    scanf("%d", &x);
    printf("Введіть кінцеве значення y: ");
    scanf("%d", &y);
    
    if (x < 0 || y < 0 || x > y || y >= 2147483648) 
    {
        printf("Неправильні значення x або y.\n");
        return 1;
    }

    int result = min_steps(x, y);
    printf("Мінімальна кількість кроків від %d до %d: %d\n", x, y, result);

    return 0;
}
