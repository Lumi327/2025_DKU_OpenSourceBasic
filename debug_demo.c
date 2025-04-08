#include <stdio.h>

int multiply(int a, int b)
{
    int result = a * b;

    return result;
}

int add(int a, int b)
{
    int sum = a + b;

    return sum;
}

int compute(int x)
{
    int m = multiply(x, 2);
    int a = add(m, 10);

    return a;
}

int main()
{
    int input = 5;
    int output = compute(input);

    printf("Result: %d\n", output);

    return 0;
}
