#include <stdio.h>
int nod=0;
void check(int array[100],int temp[100],int start,int end,int index,int l,int sum) {
    if(index==l) {
        int tot=0;
        for(int k=0;k<l;k++)
        tot=tot+temp[k];
        if(tot==sum)
        nod++; }
    for(int k=start;k<=end&&end-k+1>=l-index;k++) {
        temp[index]=array[k];
        check(array,temp,k+1,end,index+1,l,sum); } }
int main() {
    int n,array[100],i,sum;
    scanf("%d%d",&n,&sum);
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    int temp[100];
    for(i=1;i<=n;i++)
    check(array,temp,0,n-1,0,i,sum);
    if(nod>0)
    printf("YES");
    else
    printf("NO");
    return 0; }