#include <stdio.h>
int main(){int q[20],front=0,rear=0,n,i,x;printf("Enter number of values: ");scanf("%d",&n);for(i=0;i<n&&i<20;i++){scanf("%d",&x);q[rear++]=x;}printf("Queue: ");while(front<rear)printf("%d ",q[front++]);return 0;}
