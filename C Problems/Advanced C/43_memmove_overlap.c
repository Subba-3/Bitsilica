#include <stdio.h>
#include <string.h>
int main(){char s[100];int from,to,n;printf("Enter string: ");scanf(" %99[^\n]",s);printf("Enter source index, destination index and count: ");scanf("%d%d%d",&from,&to,&n);memmove(s+to,s+from,n);s[to+n]='\0';printf("Result: %s",s);return 0;}
