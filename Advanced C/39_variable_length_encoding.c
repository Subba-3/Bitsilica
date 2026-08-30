#include <stdio.h>
int main(){unsigned int n;printf("Enter number: ");scanf("%u",&n);printf("Encoded bytes: ");do{unsigned int b=n&127;n>>=7;if(n)b|=128;printf("%02X ",b);}while(n);return 0;}
