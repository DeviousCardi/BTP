#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,a[1000],j,total=0,temp,temp2,count[1000];
    scanf("%d",&n);
    for(i=0;i<n;) {
        scanf("%d",&a[i]);
        for(j=i-1;j>=0;j--) {
            if(a[i]<a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                total=total+1;
                count[j]=count[j]+1;
                temp2=i;
                i=j;
                j=temp2-1; } }
        i=temp2;
        i++; }
    printf("%d\n",total);
    for(i=0;i<n;i++)
        printf("%d ",count[i]);
	return 0; }