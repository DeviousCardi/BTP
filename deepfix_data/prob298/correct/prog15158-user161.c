#include <stdio.h>
#include <stdlib.h>
int search(int array[],int start,int end,int number) {
    if(start>end){return 0;}
    int middle=(start+end)/2;
    if (number==array[middle])
    {return 1;}
    else if(number>array[middle])
    {return search(array,middle+1,end,number);}
    else
    {return search(array,start,middle-1,number);} }
int cata(int n) {
    if(n==0||n==1){return 1;}
    else {
        return (4*(n-1)+2)*cata(n-1)/(n+1); } }
int main() {
    int catalan[17],i,t,input;
    for(i=0;i<17;i++) {
        catalan[i]= cata(i); }
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&input);
        if(search(catalan,0,16,input)==1)
        printf("yes\n");
        else printf("no\n"); }
	return 0; }