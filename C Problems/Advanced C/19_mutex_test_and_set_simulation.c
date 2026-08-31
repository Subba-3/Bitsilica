#include <stdio.h>
int main(){int lock=0,request;printf("Enter 1 to acquire lock: ");scanf("%d",&request);if(request==1&&lock==0){lock=1;printf("Lock acquired");}else printf("Lock busy");return 0;}
