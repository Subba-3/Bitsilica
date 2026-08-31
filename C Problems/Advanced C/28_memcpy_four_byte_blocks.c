#include <stdio.h>
#include <string.h>
int main(){char s[100],d[100];printf("Enter text: ");scanf(" %99[^\n]",s);memcpy(d,s,strlen(s)+1);printf("Copied text: %s",d);return 0;}
