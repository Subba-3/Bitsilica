/*
Find the highest frequency character
Example:
Input:  banana
Output: a
  */

#include<stdio.h>

int main(){

    char a[100];
    int i,j;
    int count;
    int max=0;
    char ch;

    printf("enter the string:\n");
    scanf("%[^\n]",a);

    for(i=0;a[i]!='\0';i++){

        count=0;

        for(j=0;a[j]!='\0';j++){
            if(a[i]==a[j]){
                count++;
            }
        }

        if(count>max){
            max=count;
            ch=a[i];
        }
    }

    printf("highest frequency character is %c",ch);

}
