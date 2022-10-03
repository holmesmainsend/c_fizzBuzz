#include <stdio.h>

int fizzBuzz (int a);

int main() {
    int x, y;
    printf("Please enter an integer: ");
    scanf("%d", &x);
    y = fizzBuzz(x);
    return 0;
}

int fizzBuzz (int a) {
    for (int i = 0; i <= a; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}