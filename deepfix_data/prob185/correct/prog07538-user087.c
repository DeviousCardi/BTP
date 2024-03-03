#include <stdio.h>
int a[30];
int find_sum(int sum,int start,int end) {
    if(a[start]==sum)
    return 1;
    else if(start==end)
    return 0;
    else
    return find_sum(sum-a[start],start+1,end)||find_sum(a[start],start+1,end); }
int main() {
    int m,n;int i;
    scanf("%d %d\n",&m,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int r=find_sum(n,0,m-1);
    if(r==0)
    printf("NO");
    else if(r==1)
    printf("YES");
    return 0; }