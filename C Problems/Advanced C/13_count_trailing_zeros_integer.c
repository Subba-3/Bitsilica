#include <stdio.h>
int main(){unsigned int n;int count=0;printf("Enter number: ");scanf("%u",&n);if(n==0){printf("All bits are zero");return 0;}while((n&1)==0){count++;n=n>>1;}printf("Trailing zeros: %d",count);return 0;}
