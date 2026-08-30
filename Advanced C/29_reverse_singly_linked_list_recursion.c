#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node*next;};
struct Node*rev(struct Node*h){if(!h||!h->next)return h;struct Node*r=rev(h->next);h->next->next=h;h->next=NULL;return r;}
int main(){struct Node*h=NULL,*t=NULL,*p;int n,i,x;scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&x);p=malloc(sizeof(struct Node));p->data=x;p->next=NULL;if(!h)h=p;else t->next=p;t=p;}h=rev(h);for(p=h;p;p=p->next)printf("%d ",p->data);return 0;}
