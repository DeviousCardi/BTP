#include <stdio.h>
int main(){
    int k,n,i,j,l,c=0;
    int nums[1000];
    scanf("%d\n%d",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&nums[i]); }
    for (i=0;i<n;i++) {
        if (nums[i]<=k) {
            for(j=i+1;j<n;j++) {
                if (nums[j]==(k-nums[i])) {
                    c++;
                    break; } } }
        if(c==1)
         break; }
    if(c==0)
    printf("unlucky");
    else
    printf("lucky");
    return 0; }