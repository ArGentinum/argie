// Online C compiler to run C program online
#include <stdio.h>
void bsort(int x,int *ptr){
    int i,j,swap,ex;
    for(i=0;i<x;++i){
        for(j=i+1;ptr[j]<ptr[j-1]&&j!=0;--j){
            swap=ptr[j];
            ptr[j]=ptr[j-1];
            ptr[j-1]=swap;
        }
for(ex=0;ex<x;++ex){
        printf("%d,",ptr[ex]);
    }
    printf("\n");
        
    }
    
}

int main() {
    int a[30],i,max;
    printf("enter the max num of elements:");
    scanf("%d",&max);
    for(i=0;i<max;++i){
        scanf("%d",&a[i]);
    }
    bsort(max,a);
    for(i=0;i<max;++i){
        printf("%d,",a[i]);
    }

    return 0;
}