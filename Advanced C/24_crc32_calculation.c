#include <stdio.h>
unsigned int crc32(char*s){unsigned int crc=0xFFFFFFFF;int i;while(*s){crc^=(unsigned char)*s++;for(i=0;i<8;i++)crc=(crc>>1)^(0xEDB88320&-(int)(crc&1));}return ~crc;}
int main(){char s[200];printf("Enter text: ");scanf(" %199[^\n]",s);printf("CRC32: %08X",crc32(s));return 0;}
