#include <stdio.h>
int main(){char s[200],sub[100];int i,j,found=0;printf("Enter string: ");scanf(" %199[^\n]",s);printf("Enter search string: ");scanf(" %99[^\n]",sub);for(i=0;s[i];i++){for(j=0;sub[j]&&s[i+j]==sub[j];j++);if(!sub[j]){found=1;printf("Found at index %d",i);break;}}if(!found)printf("Not found");return 0;}
