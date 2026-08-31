#include <stdio.h>
int main(){int pool[10]={0},n,i,pos;printf("Enter number of blocks to use: ");scanf("%d",&n);for(i=0;i<n&&i<10;i++){printf("Enter value: ");scanf("%d",&pool[i]);}printf("Enter block to read: ");scanf("%d",&pos);if(pos>=0&&pos<n)printf("Value: %d",pool[pos]);else printf("Invalid block");return 0;}
