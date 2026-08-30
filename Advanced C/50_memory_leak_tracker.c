#include <stdio.h>
#include <stdlib.h>
int main(){void *p[20];size_t size[20];int n,i;printf("Enter number of allocations: ");scanf("%d",&n);if(n>20)n=20;for(i=0;i<n;i++){printf("Enter size: ");scanf("%zu",&size[i]);p[i]=malloc(size[i]);}printf("Allocated blocks: %d\n",n);for(i=0;i<n;i++)free(p[i]);printf("All blocks freed");return 0;}
