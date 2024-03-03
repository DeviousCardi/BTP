#include <stdio.h>
#include <stdlib.h>
int i=0;
void reverse(int len,char str[len]){
    char tmp;
    if(i==(len/2)){
        return ; }
    else{
        tmp=str[i];
        str[i]=str[len-i];
        str[i]=tmp;
        i++; }
    reverse(len,str); }
int main() {
	char str[10]="kjcvlkljlk";
	reverse(10,str);
	printf("%s",str);
	return 0; }