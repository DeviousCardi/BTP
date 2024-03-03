#include <stdio.h>
#include <stdlib.h>
int h=0;
int hanoi(int n,char source, char temp, char dest){
    if(n>0){
        hanoi(n-1,source,dest,temp);
        hanoi(n-1,dest,temp,source);
        h++; }
    return h; }
int main() {
	int t,i,j,m=0,flag=0;
	int k[10];
	char A,B,C;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&k[i]);
	    for(j=0;j<10;j++){
	        h=hanoi(j,'A','B','C');
	        if(k[i]==hanoi(j,'A','B','C')-m){
	            m=h;
	            printf("yes%d\n",h);
	            flag=1;
	            break; } }
	    if(flag==0)
	            printf("no%d\n",h); }
	return 0; }