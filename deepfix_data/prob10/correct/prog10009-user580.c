#include<stdio.h>
void func(int a[],int n) {
    int maxtill[100],k;
    maxtill[0]=1;
    for(int i=1;i<n;i++) {
        maxtill[i]=1;
        for(int l=0;l<i;l++) {
            int m=1;
            if(a[l]<a[i])
                m=1+maxtill[l];
            if(maxtill[i]<m)
                maxtill[i]=m; } }
    int max=1;
    for(int i=0;i<n;i++)
        if(max<maxtill[i])
            max=maxtill[i];
    printf("%d",max); }
int main() {
    int b[100],n1;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
        scanf("%d",&b[i]);
    func(b,n1);
    return 0; }