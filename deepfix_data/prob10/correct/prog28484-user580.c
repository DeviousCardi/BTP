#include<stdio.h>
void func(int a[],int n) {
    int maxtill[100],k;
    for(int i=0;i<n;i++) {
        int count=1;
        k=a[i];
        for(int j=i;j>0;j--)
            if(a[j-1]<k)
                count++;
        for(int j=i;j<n-1;j++)
            if(a[j+1]>k)
                count++;
        maxtill[i]=count; }
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