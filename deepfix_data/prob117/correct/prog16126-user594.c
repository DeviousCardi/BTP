#include <stdio.h>
#include <stdlib.h>
long int h=0;
long int hanoi(int n,char source, char temp, char dest){
    if(n>0){
        hanoi(n-1,source,dest,temp);
        hanoi(n-1,dest,temp,source);
        h++; }
    return h; }
int main() {
	int t,i,j,flag=0;
	long int k[10],m=0;
	char A,B,C;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%ld\n",&k[i]);
	    for(j=0;j<20;j++){
	        h=hanoi(j,'A','B','C');
	        m=h;
	        if(k[i]==hanoi(j,'A','B','C')-m){
	            printf("yes\n");
	            flag=1;
	            break; } }
	    if(flag==0)
	            printf("no\n"); }
	return 0; }