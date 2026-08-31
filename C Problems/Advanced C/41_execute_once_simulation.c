#include <stdio.h>
int main(){static int done=0;int choice;printf("Enter 1 to execute: ");scanf("%d",&choice);if(choice==1&&!done){printf("Executed once");done=1;}else printf("Already executed");return 0;}
