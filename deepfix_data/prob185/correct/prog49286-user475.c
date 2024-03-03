#include <stdio.h>
int comb(int a[],int s,int n,int i,int sum) {
    if(i>n-1)
        return 0;
    else if(i<n) {
        sum+=a[i];
        if(sum==s)
            return 1;
        else
            return(a,s,n,i+1,sum); }
    return 0; }
int main() {
    int n,s,i;
    scanf("%d %d",&n,&s);
    int *a=(int *)(malloc(n*sizeof(int)));
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    int flag;
    flag=comb(a,s,n,0,0);
    if(flag==0)
        printf("NO");
    else if(flag==1)
        printf("YES");
    return 0; }