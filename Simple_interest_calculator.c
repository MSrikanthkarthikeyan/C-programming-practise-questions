#include <stdio.h>

int main() {
    int p,n,r;
    printf("\nEnter the Principal Amount:\n");
    scanf("%d",&p);
    printf("\nEnter the Time period in years:\n");
    scanf("%d",&n);
    printf("\nEnter the Rate of interest:\n");
    scanf("%d",&r);
    int interest=(p*n*r)/100;
    printf("\nYour simple interest is: %d\n",interest);
    return 0;
}
