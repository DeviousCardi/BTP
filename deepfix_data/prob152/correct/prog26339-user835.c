#include <stdio.h>
int sum(int ar[],int n)
{   if(n>0)
    return ar[0]+sum(ar+1,n-1); }
int Issum(int a[],int n,int k){
    if(n==1)return (a[0]==k)?1:0;
    if(a[0]==k)return 1+Issum(a+1,n-1,0)+Issum(a+1,n-1,k);
    return Issum(a+1,n-1,k)+Issum(a+1,n-1,k-a[0]); }
void food(int ar[],int n) {
    int h=sum(ar,n);
    if(h%2!=0){
        printf("NO");
        return; }
    if(Issum(ar,n,h/2)==0){
        printf("NO");
        return; }
    printf("YES");
    return; }
int main() {
    int num,i,ar[100000];
    scanf("%d\n",&num);
    for(i=0;i<num;i++) {
        scanf("%d ",&ar[i]); }
    food(ar,num);
    return 0; }