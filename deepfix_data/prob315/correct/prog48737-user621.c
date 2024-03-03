#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    int number[n];
    int inv[n];
    for(int i=0;i<n;i++) {
	   scanf("%d",&number[i]); }
	for(int i2=0;i2<n;i2++) {
        for(int i3=0;i3<n;i3++) {
            if(number[i2]>number[i3]) {
                count++;
                inv[i2]=count; } } }
	for(int i=0;1<n;i++) {
	    printf("%d",inv[i]); }
	return 0; }