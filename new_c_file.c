
#include <stdio.h>
#include <string.h>

int main() {
    char t[20]="telugu",t1[20]="english",t2[20]="Hindi",t3[20]="Math",t4[20]="Science";
    char x[]="********************************************";
    char y[]="============================================";
    int a,sum=0,cnt=1;
    printf("%s\n\t\t\tmarks\tlist\n%s\ns.no\t\tsubjects\t\tmarks\n%s",y,y,x);
    do {
        printf("\n%d.\t\t\t%s\t\t\t\t",cnt,t);
        scanf("%d",&a);
        strcpy(t,t1), strcpy(t1,t2),strcpy(t2,t3),strcpy(t3,t4);
        sum+=a;
        ++cnt;
        
    }
    while(cnt<6);
    printf("\n%s\n\t\t\t\t\t\t\tTotal=%d\n\t\t\t\t\t\t\tavg=%d\n%s",x,sum,sum/2,y);
    
    
    return 0;
}