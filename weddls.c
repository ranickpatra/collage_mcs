#include<stdio.h>
float y(float x){
    return (x*x+2)/(x*x+1); //function of which integration is to be calculated
}
int main(){
    float a,b,h,sum;
    int i,n=6,m;

    printf("Enter lower limit, upper limit: ");
    scanf("%f%f",&a,&b);
    h = (b-a)/n;
    sum=0;
    m = n/6;

        if(n%6==0){
        	for(i=0; i<m; i++) {
			
            sum=sum+((3*h/10)*(y(a)+5*y(a+h)+y(a+2*h)+6*y(a+3*h)+y(a+4*h)+5*y(a+5*h)+y(a+6*h)));
            a=a+6*h;
			}
        printf("Value of integral is %f\n", sum);
        }
        else{
            printf("Sorry ! Weddle rule is not applicable");
        }
    }
