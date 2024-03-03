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
	char str[]="cxfgjxfkjwcfgv";
	int len=strlen(str);
	reverse(len,str);
	printf("%s",str);
	return 0; }
int nCr(int n,int i){
    if (n<=i)return 0;
    else if ((n==0)&&(i==0))return 1;
    else if(i==0)return 1;
    else return(nCr(n-1,i)+nCr(n-1,i-1)); }
void check(int x,int n,int r){
    for(r=0;r<=n/2;r++){
        if(nCr(n,r)==x){
            printf("%d %d",n,r);
            return; } }
    return (x,n+1,0); }