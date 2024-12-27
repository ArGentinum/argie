#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void str_to_arr(char c[],int size,int a[]){
    int i,j;
    char k;
    for(i=0;i<size;++i){
        for(j=0,k='0';j<=9;++j,++k){
            if(k==c[i]){
            a[i]=j;
            break;
            }
        }
    }
    /*for(i=0;i<size;++i)
    printf("%d",a[i]);*/
}

int arr_to_var(int arr[],int size){
    int var=0,i,ten=1;
    for(i=size-1;i>=0;--i,ten*=10){
        var+=ten*arr[i];
    }
    return var;


}
void main(){
    //char x[100000];
    char *x=(char *)malloc(10000000);
    int in=1;
    //int y[100000];
    int *y=(int *)malloc(10000000);
    int num,i,j;
    int *z=(int *)malloc(10000000);
    int carry=0;
    printf("enter the number:");
    scanf("%s",x);
    int s=strlen(x);
    str_to_arr(x,s,y);
    num=arr_to_var(y,s);
    /*for(int i=0;i<s;++i){
        printf("%d",y[i]);
    }
    */
    //printf("num is %d",num);

    //implementing factorial logic
    --num;
    while(num>0){
    for(i=s-1,j=0;i>=0;--i,++j){
        z[j]=(num*y[i]+carry)%10;
        carry=(num*y[i]+carry)/10;
    }
    while(carry>0){
        z[j++]=carry%10;
        carry/=10;
    }
    //storing the reverse of z[] in y[]
    for(i=j-1,j=0;i>=0;--i,++j){
        y[j]=z[i];
        //printf("%d",y[j]);
    }

   
    s=j;
    --num;
    }

    //factorial output
    puts("factorial of the given number is:");
    for(i=0;i<s;++i){
        printf("%d",y[i]);
    }
    printf("\ndigit count is%d",s);


}
