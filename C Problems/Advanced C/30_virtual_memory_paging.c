#include <stdio.h>
int main(){int pageSize,page,offset,address;printf("Enter page size and virtual address: ");scanf("%d%d",&pageSize,&address);page=address/pageSize;offset=address%pageSize;printf("Page = %d Offset = %d",page,offset);return 0;}
