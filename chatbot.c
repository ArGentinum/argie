#include <Stdio.h>
#include <math.h>
#include <string.h>
int max;
//program to find the sum and avg  of the given numbers
/*
int main(){
    int a,b,c;
    printf("enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nsum of the given numbers is:%d",a+b+c);
    printf("\navg of the given numbers is:%d",(a+b+c)/2);
    return 0;

} 

//program to convert celsius to fahrenheit and vice versa
int main(){
    float a;
    char ch;
    printf("****************************************\n|\tTemperature conversion\t\t|\n========================================\n1.\tFAHRENHEIT TO CELSIUS\n2.\tCELSIUS TO FAHRENHEIT\n****************************************\n\n\t\t\t\tenter ur choice: ");
    scanf("%c",&ch);
    printf("enter the value for conversion : ");
    scanf("%f",&a);
    switch(ch){
        case 'a': printf("the value of %f coverted to celsius is :%f",a,(a-32)*5/9);
        break;
        case 'b': printf("the value of %f converted to fahrenhiet is:%f",a,(9*a/5)+32);
        break;
        default:printf("choose correct choice");
        break;
    }
    return 0;
}


//c program to find the simple interest 
int main(){
    int p,t,r;
    double si;
    printf("enter the principal: ");
    scanf("%d",&p);
    printf("enter the time(in years): ");
    scanf("%d",&t);
    printf("enter the rate: ");
    scanf("%d",&r);
    si = (p*t*r)/100;
    printf("the simple interest is %lf",si);
    return 0;

}

//program to find compound interest
int main(){
    float p,r,t;
int n;
    printf("enter the principal: ");
    scanf("%f",&p);
    printf("enter the time(in years): ");
    scanf("%f",&t);
    printf("enter the rate: ");
    scanf("%f",&r);
printf("enter the frequency of compunding interest in a year:");
scanf("%d",&n);
printf("amount returned after %d  years is %f",(int)(t),p*pow(1+r/(100*n),n*t));
    return 0;
}


//program to print sqrt of a given number
int main(){
    float a;
    scanf("%f",&a);
    printf("\n%f",sqrt(a));
    return 0;


}


//c program to print the area of a triangle using heron's formula

int num(float a,float b,float c){
    if(a>=b+c)
    return 0;
    else return 1;
}

int main() {
    float x,y,z;
    int check;
    printf("enter 3 sides of the triangle:");
    scanf("%f%f%f",&x,&y,&z);
    int d=(x>y?x:y)>z?(x>y?x:y):z;
    if (d==x)
    check=num(x,y,z);
    if(d==y)
    check=num(y,z,x);
    if(d==z)
    check=num(z,x,y);
    if(check==1){
    float s=(x+y+z)/2;
    printf("area of triangle is:%f",sqrt(s*(s-x)*(s-y)*(s-z)));
    }
    else 
    printf("triangle cannot be formed");
    

    return 0;
}


//distance traveled by an object
void main()
{
 float u,a,t,v,s;
 
 printf("\n Enter initial velocity: ");
 scanf("%f",&u);
 printf("\n Enter acceleration: ");
 scanf("%f",&a);
 printf("\n Enter time required: "); 
 scanf("%f",&t); 
 v=u+a*t;
 s=u*t + 0.5*(a*pow(t,2));
 printf("\n The final Velocity is : %f",v);
 printf("\n \n The distance traveled is : %f \n \n",s);
}


//checking the greatest number among 3 numbers
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    (a>b?a:b)>c?printf("the max of three numbers is :%d",(a>b?a:b)):printf("the max of three nummbers is :%d",c);
}

//c program for a 10th grade mark list
int main() {
    char t[20]="telugu",t1[20]="english",t2[20]="Hindi",t3[20]="Math",t4[20]="Science";
    char x[]="******************************************************************";
    char y[]="==================================================================";
    int a,cnt=1;
    float sum=0;
    printf("%s\n\t\t\tmarks\tlist\n%s\ns.no\t\t\tsubjects\t\t\tmarks\n%s",y,y,x);
    do {
        printf("\n%d.\t\t\t%s\t\t\t\t",cnt,t);
        scanf("%d",&a);
        strcpy(t,t1), strcpy(t1,t2),strcpy(t2,t3),strcpy(t3,t4);
        sum+=a;
        ++cnt;
        
    }
    while(cnt<6);
    --cnt;
    printf("\n%s\n\t\t\t\t\t\t\tTotal=%d\n\t\t\t\t\t\t\tavg=%.2f\n%s",x,(int)sum,sum/cnt,y);
    
    
    return 0;
}

//c program to evaluate linear expressions;
int main(){
float a=1,b=5,c=7,d=9,e=4,f=8,g=10;
printf("%f",a+b*c+d*e+f*g);
printf("\n%f",a/b*c-b+a*d/3);
return 0;
}

//c program to print the real roots of a quadratic equation
void main(){
    float a,b,c;
    printf("for ax^2+bx+c\na= ");
    scanf("%f",&a);
    printf("b= ");
    scanf("%f",&b);
    printf("c= ");
    scanf("%f",&c);
    if ((pow(b,2))-4*a*c<0)
    printf("there are no imaginary root/roots for this quadratic equation");
    else 
    printf("roots of the quadratic equation are:%f,%f",(-b+sqrt(pow(b,2)-4*a*c))/(2*a),(-b-sqrt(pow(b,2)-4*a*c))/(2*a));
}

// c program to find the max and min out of 4 numbers
void main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if ((a>b?a:b)>(c>d?c:d))
    printf("max number is :%d",(a>b?a:b));
    else
    printf("max number is:%d",(c>d?c:d));
    if ((a<b?a:b)<(c<d?c:d))
    printf("\nthe min number is:%d",(a<b?a:b));
    else
    printf("\nthe min number is:%d",(c<d?c:d));
}

// c program to check if a given year is leap year
void main(){
    int a;
    printf("enter the year: ");
    scanf("%d",&a);
    if (a%100!=0||a%400==0){
    if(a%4==0)
    printf("%d is a leap year",a);
    else
    printf("%d is not a leap year",a );
    }
    else
    printf("%d is not a leap year",a);
}

// c program to print the factorial of a given number
void main(){
    long long unsigned a,i,fact=1;
    printf("enter the number: ");
    scanf("%llu",&a);
    for(i=1;i<=a;++i){
        fact*=i;
    }
    printf("%llu!=%llu",a,fact);
}

//c program to check a number palindrome
void main(){
    int a,b,c=0,ori;
    printf("enter the number: ");
    scanf("%d",&a);
    ori=a;
    while(a!=0){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if(ori==c)
    printf("%d is a palindrome",ori);
    else
    printf("%d is not a palindrome",ori);
}


//c program to construct a pyramid of asterisks
void main(){
    int a;
    printf("enter the number of of lines for the asterisk pyramid: " );
    scanf("%d",&a);
    for(int b = 1;b<=a;++b ){
    for(int c=1;c<=b;++c){
    printf("*");
    }
    printf("\n");
    }
}


//c program to construct a pyramid of numbers
void main(){
    int a;
    printf("enter the number of lines for the number pyramid: ");
    scanf("%d",&a);
    for(int b=1;b<=a;++b){
        for(int c=1;c<=b;++c){
            printf("%d",c);
    }
    printf("\n");
    }
}

//c program to print a pyramid of numbers
void main(){
    int a;
    printf("enter the number of lines for the number pyramid ");
    scanf("%d",&a);
    for(int b=1;b<=a;++b){
        for (int c=1;c<=b;++c){
            printf("%d",b);
        }
        printf("\n");
    }
}

//c program to print prime numbers upto a max limit set by the user
void main(){
    int a,b,c;
    printf("enter the max limit for prime numbers: ");
    scanf("%d",&a);
    if(a>=1)
    printf("%d",2);
    else
    printf("enter the correct max limit");
    for(b=3;b<=a;++b){
        for(c=2;c<=(b/2);++c){
        if(b%c==0){
        break;
        }
        }
        if(b%c!=0)
        printf(",%d",b);
    }
    printf(".");
}

//c program to check if a given number is prime or not
void main(){
    float a;int b;
    printf("enter the number: ");
    scanf("%f",&a);
    int c=(int)a;
    int d=sqrt(c);
    if(c==2)
    printf("prime number");
    else if ((sqrt(a)!=(float)d)&&(c%2!=0)){
       
        for(b=2;b<=(a/2);++b){
            if ((int)a%b==0)
            break;
        }
    if((int)a%b!=0){
    printf("prime number");
    }
    else
    printf("not a prime number");

    }
    else{
    printf("not a prime number");
    }
 
}


//c program to find solns for a system of non homogenous eqns using gauss seidel method
void main(){
    int a[30][30],d[30][30],maxa1,maxa2,maxc1,maxc2,b,c,cnt=0;
    float x,y,z,x1,y1,z1,t1,t2,t3;
    printf("enter the number of rows for matrix(A): ");
    scanf("%d",&maxa1);
    printf("enter the number of columns for matrix(A): ");
    scanf("%d",&maxa2);
    printf("\nenter the number of rows for matrix(C): ");
    scanf("%d",&maxc1);
    printf("enter the number of colmns for matrix(c): ");
    scanf("%d",&maxc2);
    for (b=0;b<maxa1;++b){
        for(c=0;c<maxa2;++c){
            printf("\na[%d][%d]:",b,c);
            scanf("%d",&a[b][c]);
        }
    }
    for(b=0;b<maxc1;++b){
        for(c=0;c<maxc2;++c){
            printf("\nd[%d][%d]:",b,c);
            scanf("%d",&d[b][c]);
        }
    }
    printf("\n\n");
     for (b=0;b<maxa1;++b){
        for(c=0;c<maxa2;++c){
            printf(" %d",a[b][c]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (b=0;b<maxc1;++b){
        for(c=0;c<maxc2;++c){
            printf("   %d",d[b][c]);
        }
        printf("\n");
    }
    for (x=1;cnt==0;++cnt){
        y=0;
        z=0;
        x=(d[0][0]-(a[0][1])*y-(a[0][2])*z)/(a[0][0]);
        y=(d[1][0]-(a[1][0])*x-(a[1][2])*z)/(a[1][1]);
        z=(d[2][0]-(a[2][0])*x-(a[2][1])*y)/(a[2][2]);
        printf("\n\n%f,%f,%f",x,y,z);
   
    }
    for (cnt=0;x!=x1;++cnt){
        x1=(d[0][0]-(y*(a[0][1]))-(z*(a[0][2])))/(a[0][0]);
        y1=(d[1][0]-(a[1][0])*x1-(a[1][2])*z)/(a[1][1]);
        z1=(d[2][0]-(a[2][0])*x1-(a[2][1])*y1)/(a[2][2]);
        t1=x;t2=y;t3=z;
        x=x1;y=y1;z=z1;
        x1=t1;y1=t2;z1=t3;
        printf("\n\n%f,%f,%f",x1,y1,z1);
    }
}


    //to print numbers in a descending order from n to 1
    void main(){
        int n;
        printf("enter the number: ");
        scanf("%d",&n);
        for(int b=1;n>=b;--n){
            printf(" %d",n);
        }
    }
    
    //c program to check the behaviuor of execution of break and continue statements 
    void main(){
        int a;
        printf("enter a number " );
        scanf("%d",&a);
        for(int b=1;a>b;--a){   
            if (a==5)
            continue;
        if(a==4)
        break;
          printf(" %d",a);
        }

    }
    //to check if a given year is leap year or not
   void main(){
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    if(year%100!=0||year%400==0){
        if (year%4==0)
        printf("%d is a leap year",year);
        else
        printf("%d is not a leap year",year);
    }
    else
    printf("%d is not a leap year",year);

   }


void main(){
    int a=1,n;
    printf("enter the max limit: ");
    scanf("%d",&n);
    do{
        if(a%2!=0)
        printf("%d ",a);
        a++;
    }
    while(a<=n);
}

void main(){
    int a=1,n;
    printf("enter the max limit: ");
    scanf("%d",&n);
    while(a<=n){
    if(a%2!=0)
    printf("%d ",a);
    ++a;
    }
}

//c program to print the fibonacci series
void main(){
    int a=0,b=1,n,cnt;
    printf("enter the max limit for the fibonacci series: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for( cnt=2;cnt<n;++cnt){
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    //verifying the count of digits
    printf("\n%d",cnt);
}


//c program to check for a number palindrome
void main(){
    int a,b,c=0,d;
    printf("enter the number: ");
    scanf("%d",&a);
    d=a;
    while(a!=0){
        b=1;
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    
    if(d==c)
    printf("%d is a palindrome",d);
    else
    printf("%d is not a palindrome",d);
}

//to build a simple calculator to perform a single operation for two operands 
void main(){
    int a,b,c;
    printf("simple calculator\n1.addition\n 2.substraction\n 3.multiplication\n 4.division");
    printf("\nenter ur choice: ");
    scanf("%d",&c);
    switch(c){
    case 1:
    printf("enter two numbers: ");
        scanf("%d%d",a,b);
        printf("\nresult=%d",a+b);
        break;
       
    
    case 2:
         printf("enter two numbers: ");
        scanf("%d%d",a,b);
        printf("\nresult=%d",a-b);
        break;

    
    case 3:
         printf("enter two numbers: ");
        scanf("%d%d",a,b);
        printf("\nresult=%d",a*b);
        break;
    
    case 4:
         printf("enter two numbers: ");
        scanf("%d%d",a,b);
        printf("\nresult=%d",a/b);
        break;
    
    default:
        printf("enter correct choice");
    }
}

//c program to store and print numbers in an a 1d array using loop 

int max;
void main(){
    //VIP
    //initialising max must be done before declaring the actual array
    //as declaring the array before initialising max, tends to undefined behaviour of array

    printf("enter the maxsize: ");
    scanf("%d",&max);        
    int a[max],b;
    for(b=0;b<max;++b){
        printf("a[%d]: ",b);     
        scanf("%d",&a[b]);  
    }
    printf("\n");
    for(b=0;b<max;++b){
        printf("%d ",a[b]);
    }
}


int max;
void main(){
    int a[50],b;
    printf("enter the maxsize: ");
    scanf("%d",&max);
    for(b=0;b<max;++b){                             //undefined behaviour of array, as the variable 'max' has been initialised after the declaration of the array
        printf("a[%d]: ",b);
        scanf("%d",&a[b]);  
    }
    printf("\n");
    for(b=0;b<max;++b){
        printf("%d ",a[b]);
    }
}

//program to transpose a matrix
void main(){
    int a[50][50],i,j,x,y,k;
    printf("enter the number of rows: ");
    scanf("%d",&x);
    printf("enter the number of columns: ");
    scanf("%d",&y);
    //loop for reading values into 2d matrix
    for(i=0;i<x;++i){
        for(j=0;j<y;++j){
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<x;++i){
        for(j=0;j<y;++j){
            if(i==j)
            printf("%5d",a[i][j]);
            else{
                k=i;
                i=j;
                j=k;
                printf("%5d",a[i][j]);
                k=i;
                i=j;
                j=k;
            }
        }
        printf("\n");
    }
}

//program to eliminate duplicate characters in an array
void main(){
    int a[]={1,2,5,6,8,5,8,4},i,k;
    int b= sizeof(a)/sizeof a[2];
    
    for(i=0;i<b;++i){
        for(k=i;k!=0;--k){
            if(a[i]==a[(k-1)])
            break;
            
        }
        if(k==0)
        printf("%d,",a[i]);
            
        
    }
    
}

//program to find ascii values of characters and vice versa
#include <stdio.h>
void main(){
    char a,ch;
    char x='N',y;
    int b;
    printf("\na.ascii to char values converter\nb.char to ascii values converter\nenter ur choice:");
    scanf("%c",&ch);
    switch(ch){
        case 'a': 
        for(y=x;y=='N';y=x){
        printf("enter the number:");
        scanf("%d",&b);
    printf("\n ASCII value is:%c",b);
    printf("\n\ndo u wish to exit the terminal?\nclick Y if yes\nclick N if no\n\nenter ur choice:");
    scanf(" %c",&x);
    }
        break;

        case 'b':
    for(y=x;y=='N';y=x){
        printf("enter the character: ");
    scanf(" %c",&a);
    printf("\n ASCII value is:%d",a);
    printf("\n\ndo u wish to exit the terminal?\nclick Y if yes\nclick N if no\n\nenter ur choice:");
    scanf(" %c",&x);
    }
    break;

    default :printf("enter the correct choice");
    }
}

// c program to find the largest number of an integer array
int max;
void main(){
    printf("enter the max size of array:");
    scanf("%d",&max);
    int a[max],i,j=0;
    for(i=0;i<max;++i){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //for loop for initialising 'j' with the largest number
    for(i=0;i<max;++i){
        if(j<a[i])
        j=a[i];
    }
    printf("the largest number in the array is %d",j);
}

*/
//c program to find the second largest number of an integer array
int max;
void main(){
    printf("enter the max size of the array:");
    scanf("%d",&max);
    int a[max],i,j,x=0,y=0;
    for(i=0;i<max;++i){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<max;++i){
        if(x<a[i])
        x=a[i];
       
    
    for(j=0;j<=i;++j){
        if(y<a[j]&&a[j]<x)
        y=a[j];
    }
   
    }
    printf("the largest number is %d",x);
    printf("\nthe 2nd largest number is %d",y);
}
/*
//c program to print unique elements in an array
void main(){
    printf("enter the max size:");
    scanf("%d",&max);
    int a[max],i,j,swap;
    //for loop for reading elements into the array
    for(i=0;i<max;++i){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //nested for loop method for overwriting similar elements to 0
    for(i=0;i<max;++i,swap=0){
        for(j=0;j<max;++j){
            if(a[i]==a[j]&&i!=j){
            a[j]=0;
            ++swap;
            }
        }
        if(swap!=0)
        a[i]=0;
    }
    //for loop for printing elements in the array excluding 0's
    for(i=0;i<max;++i){
        if(a[i]!=0)
        printf("%d,",a[i]);
    }
}



//c program to eliminate duplicate elements in an integer array
void main(){
    printf("enter the max size:");
    scanf("%d",&max);
    int a[max],i,j,swap=0;
    //for loop for reading elements into the array
    for(i=0;i<max;++i){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //for loop method for eliminating duplicate elements int the array
    for(i=0;i<max;++i,swap=0){
        for(j=0;j<i;++j){
            if(a[i]==a[j])
            ++swap;
        }
        if(swap==0)
        printf("%d,",a[i]);
    }
    
}
*/










    







