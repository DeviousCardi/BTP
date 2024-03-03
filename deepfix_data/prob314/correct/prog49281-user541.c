#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,count=0;
    int a[20];
    scanf ("%d",&n);
    for (i=0;i<n;i++){
        scanf ("%d",&a[i]); }
    for (i=1;i<(n-1);i++){
        if (a[0]<a[1]){
        count=count +1; }
        if ((a[i]<a[i-1]) && (a[i]<a[i+1])){
        count=count+1; }
    if (a[n-1]<a[n-2]){
        count=count+1; }
    printf ("%d",count); }
        return 0; }