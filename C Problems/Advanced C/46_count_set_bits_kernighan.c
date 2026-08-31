#include <stdio.h>
int main(){unsigned int n;int count=0;printf("Enter number: ");scanf("%u",&n);while(n){n=n&(n-1);count++;}printf("Set bits: %d",count);return 0;}
