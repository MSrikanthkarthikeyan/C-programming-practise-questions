#include <stdio.h>
#include<math.h>

int main() {
    float r1,r2;
    float det;
    int a,b,c;
    printf("Enter the x^2 coefficient:");
    scanf("%d",&a);
    printf("Enter the x coefficient:");
    scanf("%d",&b);
    printf("Enter the constant coefficient:");
    scanf("%d",&c);
    det=sqrt(b*b-4*a*c);
    
    if(det>0){
        printf("\nroot 1 is:%f\n",(-b+det)/(2*a));
        printf("\nroot 2 is:%f\n",(-b-det)/(2*a));
    }
    else if(det==0){
        printf("Both roots are equal to: %f",(-b)/2*a);
    }
    else if(det<0){
        printf("\nroot 1 is:%s\n",(-b+(det))/(2*a));
        printf("\nroot 2 is:%s\n",(-b-(det))/(2*a));
        
    }
    
    
    
    
}
