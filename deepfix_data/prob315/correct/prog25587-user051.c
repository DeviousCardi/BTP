#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,a[1000],j,total,temp,count[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        for(j=0;j<i;j++) {
            if(a[i]<a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                total=total+1;
                count[j]=count[j]+1; } } }
    printf("%d\n",total);
    for(i=0;i<n;i++)
        printf("%d ",count[i]);
	return 0; }