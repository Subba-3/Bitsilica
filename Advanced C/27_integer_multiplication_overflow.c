#include <stdio.h>
#include <limits.h>
int main(){int a,b;long long r;printf("Enter two integers: ");scanf("%d%d",&a,&b);r=(long long)a*b;if(r>INT_MAX||r<INT_MIN)printf("Overflow detected");else printf("Result: %d",(int)r);return 0;}
