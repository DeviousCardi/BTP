#include <stdio.h>
int check(int a[],int start,int n){
    if(start>=n){
        return 0; }
    int sum1=0,sum2=0,i;
    for(i=0;i<=start;i++){
        sum1=sum1+a[i]; }
    for(i=start+1;i<n;i++){
        sum2=sum2+a[i]; }
    if(sum1==sum2){
        return 1; }
    else{
        return check(a,start+1,n); } }
int main() {
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int start=0;
    if(check(a,start,n)==1){
        printf("YES"); }
    else{
        printf("NO"); }
    return 0; }