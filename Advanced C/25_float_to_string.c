#include <stdio.h>
int main(){float f;int whole,frac;printf("Enter float: ");scanf("%f",&f);whole=(int)f;frac=(int)((f-whole)*100);printf("String form: %d.%02d",whole,frac<0?-frac:frac);return 0;}
