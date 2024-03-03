#include <stdio.h>
int i=0,flag=0;
void cheak_sum(int a[],int s1,int s2,int cheak,int n){
    if(cheak==s1){
        flag=1;
        printf("YES"); }
    if (flag){
        return; }
    i++;
    if(i==n) return 0;
    cheak_sum(a,s1+a[i],s2,cheak)
    cheak_sum(a,s1,s2+a[i],cheak) }
int main() {
    return 0; }