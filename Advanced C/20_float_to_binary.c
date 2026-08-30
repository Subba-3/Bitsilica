#include <stdio.h>
int main(){float f;unsigned int u;int i;printf("Enter float: ");scanf("%f",&f);u=*(unsigned int*)&f;for(i=31;i>=0;i--)printf("%u",(u>>i)&1);return 0;}
