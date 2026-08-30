#include <stdio.h>
int main(){unsigned int value;int start,len;printf("Enter 32-bit value: ");scanf("%u",&value);printf("Enter start bit and length: ");scanf("%d%d",&start,&len);printf("Extracted value: %u",(value>>start)&((1u<<len)-1));return 0;}
