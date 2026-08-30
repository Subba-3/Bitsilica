#include <stdio.h>
int main(){int a[50],n,i,pos=0;printf("Enter size: ");scanf("%d",&n);printf("Enter elements: ");for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n;i++)if(a[i]!=0){a[pos]=a[i];pos++;}while(pos<n){a[pos]=0;pos++;}printf("Output: ");for(i=0;i<n;i++)printf("%d ",a[i]);return 0;}
