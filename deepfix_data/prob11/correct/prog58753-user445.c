#include <stdio.h>
int srch(int sum1 ,int s,int i,int a[30],int n) {
    int l=0;
    static int e=0;
    if(e==1)
    l=l+1;
    if((l==n-1)&&(sum1!=s))
    return 0;
    if(sum1==s) {
        return 1; }
    if(l!=i) {
     e=1;
     return srch(sum1+a[l],s,i,a,n);}
    else {
        if (e==1)
    return  srch(sum1+a[l+1],s,i,a,n);} }
int main() {
    int n,s,i,d=0;
    int sum1;
    int a[30];
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        sum1=a[i];
        d=srch(sum1,s,i,a,n);
        if(d==1){
        printf("YES");
        break;}
        else
        continue; }
    if((d==0)&&(i=n))
    printf("NO");
    return 0; }