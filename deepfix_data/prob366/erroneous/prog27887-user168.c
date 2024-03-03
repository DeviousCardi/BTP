#include <stdio.h>
int main(){
    int n;
    int a[100],differnce=0,difference1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                difference=i-j;
                difference1= (i+1)-(j+1)
                if(difference>difference1)
                differnce=difference1; } }
    }printf("%d",differnce);
    return 0; }