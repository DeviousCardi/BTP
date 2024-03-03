#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, a[1000],b[1000],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        int count=0;
        for(int j=i+1;j<n;j++) {
            if(a[j]<a[i]) {
                count++; }
            b[i]=count; } }
    for(int i=0;i<n;i++)
    sum=sum+b[i];
    printf("%d\n",sum);
    for(int i=0;i<n;i++)
    printf("%d ",b[i]);
	return 0; }