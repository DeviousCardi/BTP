#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i,j,count1,count2=0;
    scanf("%d",&N);
    int arr[N],cnt[i];
    for(i=0;i<N;i++) {
        scanf("%d",&arr[i]);
        cnt[i]=0; }
    for(i=0;i<N;i++)
    {   count1=0;
        for(j=i+1;j<N;j++) {
            if(arr[i]>arr[j])
                count1++; }
        count2=count2+count1;
        cnt[i]=count1; }
    printf("%d",count2);
    for(i=0;i<N;i++)
        printf("%d ",cnt[i]);
	return 0; }