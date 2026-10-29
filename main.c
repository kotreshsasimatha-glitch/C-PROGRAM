#include <stdio.h>
#include <stdlib.h>

//kotresh(U32JX26S0034)//
int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("Sum=%d\n",a + b);
    printf("Difference=%d\n",a - b);
    printf("Product=%d\n",a*b);
    if(b!=0){
        printf("quotient=%d\n",a/b);
        printf("remainder=%d\n",a%b);
    }
    else{
        printf("division and remainder are not possible because divisor is zero. \n");
    }
    return 0;
}
