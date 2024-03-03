#include <stdio.h>
#include <stdlib.h>
int main() {
	 int a[1000],ci[1000];
    int count,n,sum=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(int i=0;i<n;i++) {
        count=0;
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j])
                count++; }
        ci[i]=count;
        sum=sum+count; }
    printf("%d\n",sum);
    for(int i=0;i<n;i++)
        printf("%d ",ci[i]);
	return 0; }