#include <stdio.h>
void check(int a[],int start,int end,int key);
int main() {
    int n,s,a[31];
    scanf("%d %d",&n,&s);
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    check(a,0,n-1,s);
    return 0; }
void check(int a[],int start,int end,int key) {
    int flag=0;
    if((start)>=end) {
        printf("NO");
        return; }
    else {
         for(int i=start+1;i<=end;i++) {
            if(a[start]+a[i]==key)
            flag=1;
            break; }
         if(flag==1) {
             printf("YES");
             return; } }
    check(a,start+1,end,key); }