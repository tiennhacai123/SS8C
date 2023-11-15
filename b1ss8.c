#include<stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    int max=a[0];
     for(int i = 0; i<n; i++){
        if(max<a[i]){
            max = a[i];
        }
    }printf("max la %d\n",max);
    int min = a[0];
    for(int i = 0; i<n; i++){
        if(min>a[i]){
            min = a[i];
        }

    } printf("Min la %d",min);
}