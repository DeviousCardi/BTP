#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main() {
    int n1,n2,i,flag=0,ctr,j,min=INT_MAX;
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    int b[n2];
    for(i=0;i<n2;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n1;i++)
    {   ctr=0;
        for(j=0;j<n2;j++) {
            if(a[i]==b[j]) {
              ctr=1;
              break; } }
        if(ctr==0) {
            if(a[i]<min) {
                min=a[i];
                flag=1; } } }
    if(flag==0)
    printf("NO");
    else
    printf("%d",min);
	return 0; }