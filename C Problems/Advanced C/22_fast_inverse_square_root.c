#include <stdio.h>
int main(){float n;int i;float x2,y;printf("Enter positive number: ");scanf("%f",&n);x2=n*0.5f;y=n;for(i=0;i<5;i++)y=0.5f*(y+x2/y);printf("Inverse square root: %.6f",1.0f/y);return 0;}
