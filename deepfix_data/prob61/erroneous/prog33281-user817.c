int main() {
    inti,j k,t,count=0;
    int a[50];
    scanf("%d",&k);
    scanf("%d",&t);
    for(int i=0;i<k;i++) {
        scanf("%d" ,&a[i]); }
    for(i=0;i<k;i++) {
        for(j=0;j<i;j++) {
            if(a[i]>a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                count++ } } } }