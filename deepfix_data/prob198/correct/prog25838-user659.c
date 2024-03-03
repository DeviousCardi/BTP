#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,a1[20],temp,a2[20],i,j,count;
    scanf("%d\n",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d\n",&a1[i]);
        for(j=1;j<=i;j++) {
            if(a1[j]>a1[j-1]) {
                temp=a1[j];
                a1[j]=a1[j-1];
                a1[j-1]=temp; } } }
    scanf("%d\n",&n2);
    for(i=0;i<n2;i++) {
        scanf("%d\n",&a2[i]); }
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++) {
            if(a1[i]!=a2[j]) {
               count=count+1; } }
        if(count==n2) {
            printf("%d",a1[i]);
            break; }
        else
        temp=temp+1; }
    if(temp==n1)
    printf("NO");
	return 0; }