#include <stdio.h>
#include <stdlib.h>
int main() {
    int num,temp,rev=0,numcopy;
    scanf("%d",&num);
    numcopy=num;
    while(num!=0){
        temp=num%10;
        num=num/10;
        rev=rev*10+temp; }
    if(rev==numcopy){
        printf("YES");}
    else{
        printf("NO");}
	return 0; }