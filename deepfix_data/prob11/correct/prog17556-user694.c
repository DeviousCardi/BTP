#include <stdio.h>
int check(int a[],int size,int index,int sum,int ans) {
    if(sum==ans)
    return 1;
    else if(sum!=ans && index==size)
    return 0;
    return check(a,size,index+1,sum+a[index],ans)||check(a,size,index+1,sum,ans); }
int main() {
    int n,s;
    int a[30];
    scanf("%d %d",&n,&s);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b=check(a,n,0,0,s);
    if(b==1)
    printf("YES");
    else if(b==0)
    printf("NO");
    return 0; }