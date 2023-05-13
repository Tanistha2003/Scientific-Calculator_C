#include <stdio.h>
#include <math.h>
float add(float a, float b)/*addition*/
{
    float s=a+b;
    return s;
}
float subtract(float a, float b)/*substraction*/
{   float s=a-b;
    return s;

}
float multiply(float a,float b)/*product*/
{
    return (a*b);
}
float quotient(float a, float b)/*quotient*/
{
    float q=a/b;
    return q;
}
int modulus(int a,int b)/*modulus*/
{ 
    int d1= a%b;
    return d1;
}
float sqrroot(float a)/*squareroot*/
{
    float sq=sqrt(a);
    return sq;
}
float power(float a, float b)/*power*/
{
    float p=pow(a,b);
    return p;
}
float sine_value(float x)/*sine*/
{
    float s=sin(x);
    return x;
}
float cosine_value(float a)/*cosine*/
{
    float s= cos(a);
    return s;
}
float tangent_value(float x)/*tan*/
{
    float s=sin(x)/cos(x);
    return s;
}
float cosec_value(float a)/*cosec*/
{
        float s=1/(sin(a));
    return s;
}
float sec_value(float a)/*sec*/
{
    float s=1/(cos(a));
    return s;
}
float cot_value(float a)/*cot*/
{
    float s=cos(a)/sin(a);
    return s;
}
float natural_logarithm(double a)/*ln value*/
{
    double s=log(a);
    return s;
}
float exp_value(double x)/*exponential value*/
{
    double e=exp(x);
    return e;
}
float sin_inversevalue(double x)/*sin inverse value*/
{
    double s=asin(x);
    return x;
}
float cos_inversevalue(double x)/*cos inverse value*/
{
    double s=acos(x);
    return x;
}
float tan_inversevalue(double x)/*tan inverse value*/
{
    double s=atan(x);
    return x;
}
float log_base10(double x)/*log base 10 value*/
{
    double s = log10(x);
    return s;
}
int main()
{       printf("1.Add two numbers\n");
        printf("2.Substract two numbers\n");
        printf("3.Product of two numbers\n");
        printf("4.Quotient of two numbers\n");
        printf("5.Squareroot of a numbers\n");
        printf("6.Power of a numbers\n");
        printf("7.Find remainder of two numbers\n");
        printf("8.Find the sine value\n");
        printf("9.Find the cosine value\n");
        printf("10.Find the tan value\n");
        printf("11.Find cosec value\n");
        printf("12.Find the value of sec\n");
        printf("13.Find the value of cot\n");
        printf("14.Find the value of natural logarithm\n");
        printf("15.Find the value of exponential value\n");
        printf("16.Find the value of sin inverse\n");
        printf("17.Find the value of cos inverse\n");
        printf("18.Find the value of tan inverse\n");
        printf("19.Find the value of log base 10\n");
        

    for(;;)
    {
        int ch;
        printf("Enter choice\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            float p,q;
            printf("Enter two numbers to add\n");
            scanf("%f%f",&p,&q);
            float sum=add(p,q);
            printf(" %f + %f =%.3f ",p,q,sum);
        }
        else if(ch==2)
        {
            float a,b;
            printf("Enter two numbers to subtract in order\n");
            scanf("%f%f",&a,&b);
            float diff=subtract(a,b);
            printf("%f-%f=%.2f",a,b,diff);

        }
        else if(ch==3)
        {
            float p,q;
            printf("Enter two numbers to find the product\n");
            scanf("%f%f",&p,&q);
            float prod=multiply(p,q);
            printf("%f X %f = %.4f",p,q,prod);
        }
        else if(ch==4)
        {
            float p,q;
            printf("Enter two numbers to find the quotient in order of dividend,divisor\n");
            scanf("%f%f",&p,&q);
            float sol=quotient(p,q);
            printf("%f / %f = %.4f",p,q,sol);
        }
        else if(ch==5)
        {
            float p;
            printf("Enter number to find squareroot \n");
            scanf("%f",&p);
            float root=sqrroot(p);
            printf(" %f ^ 0.5= %.4f",p,root);
        }
        else if(ch==6)
        {
            float p,q;
            printf("Enter two numbers in the order of base,exponent\n");
            scanf("%f%f",&p,&q);
            float  a=power(p,q);
            printf("%f ^ %f = %.4f",p,q,a);
        }
        else if(ch==7)
        {
            int p,q;
            printf("Enter two numbers in integer format in order of dividend,divisor\n");
            scanf("%d%d",&p,&q);
            int rem=modulus(p,q);
            printf("remainder of %d and %d = %d\n",p,q,rem);
        }
         else if(ch==8)
        {
            float p;float rad;int a;
            printf("Enter angle\n");
            scanf("%f",&p);
            printf("Is the angle in degree? If yes press 1.\n");
            scanf("%d",&a);
            if(a==1)
            {
                rad=p*3.14/180;
            }
            else
            {rad=p;}
            float sinevalue=sin(rad);
            printf("sin %f=%.2f\n",p,sinevalue);
        }
        else if(ch==9)
        {
            float p;float rad;int a;
            printf("Enter angle\n");
            scanf("%f",&p);
            printf("Is the angle in degree? If yes press 1.\n");
            scanf("%d",&a);
            if(a==1)
            {
                rad=p*3.14/180;
            }
            else
            rad=p;
            float cosinevalue=cos(rad);
            printf("cos %f=%.2f\n",p,cosinevalue);
        }
        else if(ch==10)
        {
            float p;float rad;int a;
            printf("Enter angle\n");
            scanf("%f",&p);
            printf("Is the angle in degree? If yes press 1.\n");
            scanf("%d",&a);
            if(a==1)
            {
                rad=p*3.14/180;
            }
            else
            rad=p;
            float tanvalue=tan(rad);
            printf("tan%f=%.2f\n",p,tanvalue);
        }
        else if(ch==11)
        {
            float p;float rad;int a;
            printf("Enter angle\n");
            scanf("%f",&p);
            printf("Is the angle in degree? If yes press 1.\n");
            scanf("%d",&a);
            if(a==1)
            {
                rad=p*3.14/180;
            }
            else
            rad=p;
            float cosecvalue=1/sin(rad);
            printf("cosec %f=%.2f\n",p,cosecvalue);
        }
        else if(ch==12)
        {
            float p;float rad;int a;
            printf("Enter angle\n");
            scanf("%f",&p);
            printf("Is the angle in degree? If yes press 1.\n");
            scanf("%d",&a);
            if(a==1)
            {
                rad=p*3.14/180;
            }
            else
            rad=p;
            float secvalue=1/cos(rad);
            printf("sin %f=%.2f\n",p,secvalue);
        }
        else if(ch==13)
        {
            float p;float rad;int a;
            printf("Enter angle\n");
            scanf("%f",&p);
            printf("Is the angle in degree? If yes press 1.\n");
            scanf("%d",&a);
            if(a==1)
            {
                rad=p*3.14/180;
            }
            else
            rad=p;
            float cotvalue=1/tan(rad);
            printf("sin %f=%.2f\n",p,cotvalue);
        }
        else if(ch==14)
        {
            double p;
            printf("Enter the number to find natural log\n");
            scanf("%lf",&p);
            double ln=natural_logarithm(p);
            printf("ln %lf=%.2lf\n",p,ln);

        }
        else if(ch==15)
        {
            double p;
            printf("Enter the number to find exponential\n");
            scanf("%lf",&p);
            double e=exp_value(p);
            printf("e^ %lf=%.2lf\n",p,e);

        }
        else if(ch==16)
        {
            double p;
            printf("Enter value\n");
            scanf("%lf",&p);
            double angle=sin_inversevalue(p);
            double degree=angle*180/3.14;
            printf("sin^-1 %lf=%.2lf degree\n",p,degree);
        }
        else if(ch==17)
        {
            double p;
            printf("Enter value\n");
            scanf("%lf",&p);
            double angle=cos_inversevalue(p);
            double degree=angle*180/3.14;
            printf("cos^-1 %lf=%.2lf degree\n",p,degree);
        }
        else if(ch==18)
        {
            double p;
            printf("Enter value\n");
            scanf("%lf",&p);
            double angle=tan_inversevalue(p);
            double degree=angle*180/3.14;
            printf("tan^-1 %lf=%.2lf degree\n",p,degree);
        }
        else if(ch==19)
        {
            double p;
            printf("Enter the number to find value of log base 10\n");
            scanf("%lf",&p);
            double l=log_base10(p);
            printf("ln %lf=%.2lf\n",p,l);

        }
        else{
            printf("Wrong choice\n");
        }
        int fl;
        printf("To end press 1.\n");
        scanf("%d",&fl);
        if(fl==1)
        break;  
    }
    printf("End of calculator\n");
    return 0;
}
