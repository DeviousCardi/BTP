#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,x,y,i=0,j=0,k=0;
    int str1[20],str2[20];
    int a[10^9],b[10^9];
    scanf("%d %d %d %d\n",&n,&m,&x,&y);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]); }
    i=0;
    while (i<n && j<m) {
            if (b[j]>=a[i]-x && b[j]<=a[i]+y) {
                str1[k]=i+1;
                str2[k]=j+1;
                k++;
                j++;
                i++;
                printf("%d",i+1); }
            else if (b[j]<a[i]-x) {
                j++; }
            else if(b[j]>a[i]+y) {
                i++; } }
        printf("%d\n",k);
        for(i=0;i<k;i++) {
            printf("%d %d\n",str1[i],str2[i]); }
    return 0; }