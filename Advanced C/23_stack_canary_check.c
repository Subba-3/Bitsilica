#include <stdio.h>
int main(){unsigned int canary=0xDEADBEEF,check;printf("Enter canary value in hexadecimal: ");scanf("%x",&check);if(check==canary)printf("Stack canary is safe");else printf("Stack corruption detected");return 0;}
