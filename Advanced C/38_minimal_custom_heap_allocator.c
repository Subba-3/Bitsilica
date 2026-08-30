#include <stdio.h>
int main(){int pool[20],used=0,n,i;printf("Enter number of integers to allocate: ");scanf("%d",&n);if(n>20){printf("Allocation failed");return 0;}for(i=0;i<n;i++){scanf("%d",&pool[used]);used++;}for(i=0;i<used;i++)printf("%d ",pool[i]);return 0;}
