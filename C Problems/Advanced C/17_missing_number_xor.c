#include <stdio.h>
int main(){int n,x=0,i,v;printf("Enter n: ");scanf("%d",&n);for(i=1;i<=n;i++)x^=i;for(i=0;i<n-1;i++){scanf("%d",&v);x^=v;}printf("Missing number: %d",x);return 0;}
