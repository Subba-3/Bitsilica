#include <stdio.h>
int main(){char s[200];int i,j,count;printf("Enter string: ");scanf(" %199[^\n]",s);for(i=0;s[i];i++){count=0;for(j=0;s[j];j++)if(s[i]==s[j])count++;if(count==1){printf("First non-repeated character: %c",s[i]);return 0;}}printf("No non-repeated character");return 0;}
