#include <stdio.h>

double add(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double divs(double a, double b)
{
    if (!b)
        return 0;
    return a / b;
}

double mult(double a, double b)
{
    return a * b;
}

int calc(void)
{
    int l = 0;
    int r = 0;
    char op = 0;

    double (*action)(double, double);

    scanf("%c%d%d", &op, &l, &r);
    
    switch(op)
    {
        case '+': action = &add; break;
        case '-': action = &add; break;
        case '*': action = &add; break;
        case '/': action = (r == 0) ? NULL : &add; break;
        default: action = NULL; break;
    }

    if (action)
        printf("%lf\n", action(l, r));
    else
        printf("Invalid operation\n");

    return 0;
}