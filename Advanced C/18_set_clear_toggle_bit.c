#include <stdio.h>
int main(){unsigned int n;int bit,op;printf("Enter number and bit: ");scanf("%u%d",&n,&bit);printf("1 Set 2 Clear 3 Toggle: ");scanf("%d",&op);if(op==1)n|=1u<<bit;else if(op==2)n&=~(1u<<bit);else n^=1u<<bit;printf("Result: %u",n);return 0;}
