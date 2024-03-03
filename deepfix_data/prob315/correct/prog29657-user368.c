#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,count=0,countn=0;
    scanf("%d\n",&a);
    int arr[a],counta[a];
    for(b=0;b<a;b++){
        scanf("%d",&arr[b]); }
    for(b=0;b<a;b++){
        for(c=b+1;c<a;c++){
            if(arr[b]>arr[c]){
                countn++;
                count++; } }
        if(b==a-1){
            printf("%d\n",count); }
        counta[b]=countn;
        countn=0; }
    for(b=0;b<a;b++){
        printf("%d ",counta[b]); }
	return 0; }