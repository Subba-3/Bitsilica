/*
Remove all repeated characters from a string:
Input:
programming
Output:
progamin 
*/

#include<stdio.h>

int main(){

    char a[100];
    int i,j;
    int flag;

    printf("enter the string:\n");
    scanf("%[^\n]",a);

    for(i=0;a[i]!='\0';i++){

        flag=0;

        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                flag=1;
                break;
            }
        }

        if(flag==0){
            printf("%c",a[i]);
        }
    }

}
