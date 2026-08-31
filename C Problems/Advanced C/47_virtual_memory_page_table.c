#include <stdio.h>
int main(){int page,frame,offset,pageSize,address;printf("Enter page size and virtual address: ");scanf("%d%d",&pageSize,&address);page=address/pageSize;offset=address%pageSize;printf("Enter frame number for page %d: ",page);scanf("%d",&frame);printf("Physical address: %d",frame*pageSize+offset);return 0;}
