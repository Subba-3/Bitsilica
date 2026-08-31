#include <stdio.h>
int main(){int a,b,neg=0,result=0;if(scanf("%d%d",&a,&b)!=2)return 0;if(a<0){a=-a;neg=!neg;}if(b<0){b=-b;neg=!neg;}while(b){if(b&1)result+=a;a<<=1;b>>=1;}if(neg)result=-result;printf("Result: %d",result);return 0;}
