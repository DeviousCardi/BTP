#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int i=0;
void reverse(int len,char str[len]){
    char tmp;
    if(i==(len/2)){
        return ; }
    else{
        tmp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=tmp;
        i++; }
    reverse(len,str); }
int main() {
	char str[]="cxfgjxfkjwcfgvi";
	int len=strlen(str);
	reverse(len,str);
	printf("%s",str);
	return 0; }