#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,ar[1000];
    int count=0;int cnt[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++) {
        cnt[i]=0;
        for(j=i+1;j<n;j++) {
            if(ar[i]>ar[j])
            {count++;
            cnt[i]++;} } }
    printf("%d\n",count);
    for(i=0;i<n;i++)
    printf("%d ",cnt[i]);
	return 0; }