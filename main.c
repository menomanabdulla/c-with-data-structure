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

    int x = 10,y;
    int *p;
    printf("Value of x: %d \n",x);
    p = &x;
    y = *p;
    *p = 15;

    printf("Value of x: %d \n",x);
    printf("Value of y: %d \n",y);
    printf("Value of *p %d \n",*p);

    printf("Address of x: %p \n",&x);
    printf("Address of y: %p \n",&y);
    printf("Value of p: %p \n",p);
    printf("\n\n\n");

    int xx = 10,yy;
    int *pp,*qq;
    pp = &xx;
    qq = &yy;
    yy = *pp;
    *pp = 15;
    *qq = 20;

    printf("Value of xx: %d \n",xx);
    printf("Value of yy: %d \n",yy);
    printf("Value of *pp %d \n",*pp);
    printf("Value of *qq %d \n",*qq);
    return 0;
}
