#include <stdio.h>
int find(int a[],int index, int sum, int size) {
    for(int i=index+1;i<size;i++) {
        if(sum==a[index]+a[i]) {
            return 1; }
        else
        return 0; }
    return find(a,index+1,sum,size); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",a[i]); }
    int p;
    if(find(a,0,s,n))
        printf("YES");
    else
        printf("NO");
    return 0; }