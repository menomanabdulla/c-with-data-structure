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
    //Pointer mainly use for memory management
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
    printf("---- Pointer dereferencing ---- \n");

    int xx = 10,yy;
    int *pp,*qq;
    pp = &xx;
    qq = &yy;
    yy = *pp;
    *pp = 15; //Pointer dereferencing
    *qq = 20; //Pointer dereferencing

    printf("Value of xx: %d \n",xx);
    printf("Value of yy: %d \n",yy);
    printf("Value of *pp %d \n",*pp);
    printf("Value of *qq %d \n",*qq);

    printf("\n\n\n");
    printf("---- Null Pointer ---- \n");

    x = 100;
    int *ppp = NULL;
    printf("Value of x: %d \n",x);
    ppp = &x;
    printf("Value of *ppp: %d \n",*ppp);

    printf("\n\n\n");
    printf("---- Null Pointer dereferencing test ---- \n");

    int *pppp = NULL;
    pppp = &x;
    *pppp = 110;
    printf("Value of *pppp: %d \n",*pppp);

    printf("\n\n\n");
    printf("---- String and Pointer ---- \n");
    char s[] = "Bangladesh";
    printf("Name of our country : %s\n",s);
    printf("Address of s: %p \n",s);

    char *p1;
    p1 = s;
    printf("Name of our country: %s\n",p1);

    char c1 = 'A', c2 = 'B', c3 = 'C';
    char *p2,*p3,*p4;
    p2 = &c1;
    p3 = &c2;
    p4 = &c3;

    printf("%c, %c, %c \n",*p2,*p3,*p4);

    return 0;
}
