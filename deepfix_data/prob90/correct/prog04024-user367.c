#include <stdio.h>
int main(){
    int k,n,i,c=0;
    int nums[1000];
    int a[500]={0};
    scanf("%d\n%d",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&nums[i]);
        a[nums[i]]++; }
    for(i=0;i<n;i++)
    {   if(a[k-nums[i]]>0) {
            c++;
            break; } }
    if(c==0)
    printf("unlucky");
    else
    printf("lucky");
    return 0; }