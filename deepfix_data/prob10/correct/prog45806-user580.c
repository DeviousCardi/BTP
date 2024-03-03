#include<stdio.h>
void func(int a[],int n) {
    int maxtill[100],k;
    maxtill[0]=1;
    for(int i=1;i<n;i++) {
        for(int l=0;l<=i;l++) {
        int m=1,min=a[i];
        for(int j=i-l;j>=0;j--) {
            if(a[j]<min) {
                min=a[j];
                m++; }
            if(maxtill[j]<m)
                maxtill[j]=m; } } }
    int max=1;
    for(int i=0;i<n;i++)
        if(max<maxtill[i])
            max=maxtill[i];
    for(int i=0;i<n;i++)
        printf("%d ",maxtill[i]);
    printf("\n");
    printf("%d",max); }
int main() {
    int b[100],n1;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
        scanf("%d",&b[i]);
    func(b,n1);
    return 0; }