#include <stdio.h>
int main(){
    int n,i,j=0,pos1=0,pos2=0,c=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        b[i]=a[j];
        j=b[i]-1; }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(b[i]==b[j]) {
                c++;
                pos2=j;
                break; } }
        if(c==1) {
            break;
            pos1=i; } }
    printf("%d ",pos2+1);
    printf("%d",pos2-pos1);
    return 0; }