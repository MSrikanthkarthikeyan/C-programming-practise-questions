#include <stdio.h>

int main() {
    float fah,cel;
    char c;
    printf("Enter the conversion type you have F/C:");
    scanf("%c",&c);
    
    if(c=='F'){
        printf("Enter the temperature value:");
        scanf("%f",&fah);
        printf("The temp in Celsius is:%.2f",0.555555555555555555555555556*(fah-32));
    }
    else if(c=='C'){
        printf("Enter the temperature value:");
        scanf("%f",&cel);
        printf("The temp in Fahrenheit is:%.2f",1.8*(cel)+32);
    }
    return 0;
}
