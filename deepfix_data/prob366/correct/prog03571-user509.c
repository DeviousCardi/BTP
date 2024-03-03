#include <stdio.h>
int main(){
    int n,i,j,count=0,min=25;
    scanf("%d",&n);
    int a[200];
    for(int i=1;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                count++;
                if(count<min)
                min=count;
        }   } }
    printf("%d",count);
    return 0; }