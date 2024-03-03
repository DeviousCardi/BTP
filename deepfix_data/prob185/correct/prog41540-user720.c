#include <stdio.h>
int i,flag=0;
void cheak_sum(int a[],int s1,int s2,int cheak,int n){
    if(cheak==s1){
        flag=1;
        printf("YES");
        return; }
    if ((flag)&&(i==n)){
        return; }
    i++;
    cheak_sum(a,s1+a[i],s2,cheak,n);
    cheak_sum(a,s1,s2+a[i],cheak,n); }
int main() {
    int j,n,cheak;
    i=0;
    scanf("%d%d",&n,&cheak);
    int a[n];
    for(j=0;j<n;j++){
        scanf("%d",&a[j]); }
    cheak_sum(a,0,0,cheak,n);
    if(flag==0){
        printf("NO"); }
    return 0; }