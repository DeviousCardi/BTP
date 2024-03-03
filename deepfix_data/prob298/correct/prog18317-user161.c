#include <stdio.h>
#include <stdlib.h>
int search(int array[],int start,int end,int number) {
    if(start>end){return 0;}
    int middle=(start+end)/2;
    if (number==array[middle])
    {return 1;}
    if(number>array[middle])
    {search(array,middle+1,end,number);}
    else
    {search(array,start,middle-1,number);}
    return 0; }
int cata(int n) {
    int i,sum=0;
    if(n==0||n==1){return 1;}
    else {
        for(i=0;i<n;i++) {
            sum=cata(i)*cata(n-1-i); }
        return sum; } }
int main() {
    int catalan[17],i,t,input;
    for(i=0;i<17;i++) {
        catalan[i]= cata(i);
        printf("%d\n",catalan[i]); }
    scanf("%d",&t);
	return 0; }