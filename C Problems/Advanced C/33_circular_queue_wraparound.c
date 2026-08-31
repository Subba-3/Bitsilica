#include <stdio.h>
int main(){int q[10],size,head=0,tail=0,count=0,n,i,x;printf("Enter queue size: ");scanf("%d",&size);printf("Enter number of values: ");scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&x);if(count<size){q[tail]=x;tail=(tail+1)%size;count++;}}printf("Queue: ");for(i=0;i<count;i++)printf("%d ",q[(head+i)%size]);return 0;}
