#include <stdio.h>
int main(){unsigned int n;int k,choice;printf("Enter 8-bit number: ");scanf("%u",&n);printf("Enter positions: ");scanf("%d",&k);printf("1. Left 2. Right: ");scanf("%d",&choice);k%=8;if(choice==1)n=((n<<k)|(n>>(8-k)))&255;else n=((n>>k)|(n<<(8-k)))&255;printf("Result: %u",n);return 0;}
