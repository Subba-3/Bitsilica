#include <stdio.h>
#include <math.h>
double mysin(double x) {
    return sin(x);
}
double mycos(double x) {
    return cos(x);
}
double mytan(double x) {
    return tan(x);
}
double mylog(double x) {
    return log(x);
}
int main() {
    double x;
    int ch;
    double(*fun)(double);
    printf("Enter value: ");
    scanf("%lf", &x);
    printf("1 sin 2 cos 3 tan 4 log: ");
    scanf("%d", &ch);
    if (ch == 1) fun = mysin;
    else if (ch == 2) fun = mycos;
    else if (ch == 3) fun = mytan;
    else fun = mylog;
    printf("Result = %.2f", fun(x));
    return 0;
}
