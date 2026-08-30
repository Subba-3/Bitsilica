#include <stdio.h>
int main(){static int created=0,value=0;int x;printf("Enter value for singleton: ");scanf("%d",&x);if(!created){value=x;created=1;}printf("Singleton value: %d",value);return 0;}
