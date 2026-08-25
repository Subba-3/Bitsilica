/*Input:  "hello world from c"
Output: "c from world hello"*/


#include<stdio.h>

int main(){

    char a[100];
    int i,j;
    int len=0;

    printf("enter the string:\n");
    scanf("%[^\n]",a);

    for(i=0;a[i]!='\0';i++){
        len=len+1;
    }

    for(i=len-1;i>=0;i--){

        if(a[i]==' '){
            for(j=i+1;j<len;j++){
                if(a[j]==' ')
                    break;

                printf("%c",a[j]);
            }

            printf(" ");
        }
    }

    for(i=0;i<len;i++){
        if(a[i]==' ')
            break;

        printf("%c",a[i]);
    }

}
