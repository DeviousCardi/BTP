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
        str[len-i]=tmp;
        i++; }
    reverse(len,str); }
int main() {
	char str[6]="kjcvi";
	reverse(5,str);
	printf("%s",str);
	return 0; }