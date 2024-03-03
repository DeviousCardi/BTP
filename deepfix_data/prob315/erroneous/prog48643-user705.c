#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,a[1000],in[1000],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i])
        in[i]=0; }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((a[i]>a[j])&&(i<j)){
                in[i]=in[i]+1; } } }
    for(int i=0;i<n;i++){
        sum=sum+in[i]; }
    printf("%d\n",sum);
    for(int i=0;i<n;i++){
        printf("%d",in[i]); }
	return 0; }