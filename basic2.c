#include <Stdio.h>
#include <math.h>
#include <string.h>
//program to find the sum and avg  of the given numbers

int main(){
    int a,b,c;
    printf("enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nsum of the given numbers is:%d",a+b+c);
    printf("\navg of the given numbers is:%d",(a+b+c)/2);
    return 0;

} 

//program to convert celsius to fahrenheit and vice versa.
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
    printf("enter the principal: ");
    scanf("%f",&p);
    printf("enter the time(in years): ");
    scanf("%f",&t);
    printf("enter the rate: ");
    scanf("%f",&r);
    float si=p* (pow((1+r/100),t)) - p;
    printf("compound interest is :%f",si);
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
void main(){
    float a,b,c;
    float area;
    scanf("%f%f%f",&a,&b,&c);
    if (c>a+b)
    printf("enter s3 value less than the sum of s1 and s2  ");
    else{
    float s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf(" area of the triangle is : %f",area);
    }
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




