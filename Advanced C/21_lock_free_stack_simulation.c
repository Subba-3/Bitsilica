#include <stdio.h>
int main(){int stack[20],top=-1,n,i,v;printf("Enter number of values: ");scanf("%d",&n);for(i=0;i<n&&i<20;i++){scanf("%d",&v);stack[++top]=v;}printf("Pop order: ");while(top>=0)printf("%d ",stack[top--]);return 0;}
