#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int i;
    for(i=33;i<=126;i++){
        printf("ASCII code for %c is %d \n",i,i);
    }
    char lower_case, upper_case;
    printf("Enter lowercase character = ");
    lower_case = getchar();
    upper_case = lower_case - 32;
    printf("The capital letter is: %c \n",upper_case);
    */

    int x = 10;
    int *p;
    printf("Value of x: %d \n",x);
    p = &x;
    *p = 20;
    printf("Value of x: %d \n",x);
    x = 15;
    printf("Value of x: %d \n",x);
    printf("Value stored at location %p is %d \n",p,*p);

    printf("Address of x: %p \n",&x);
    printf("Value of p: %p \n",p);
    return 0;
}
