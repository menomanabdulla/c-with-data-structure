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

    printf("\n\n\n");
    printf("---- Pointer to Pointer ---- \n");

    char c4 = 'A';
    char *p5;
    p5 = &c4;
    printf("Address of c4: %p\n",p5);
    printf("Address of p5: %p\n",&p5);


    char c5 = 'A';
    char *p6,**p7;
    p6 = &c5;
    p7 = &p6;
    **p7 = 'B';

    printf("Value of c5 : %c \n",c5);
    printf("Value of c5 : %c \n",*p6);
    printf("Value of c5 : %c \n",**p7);

    printf("\n\n\n");
    printf("---- file operation ---- \n");

    FILE *fp;
    char filename[] = "my_file.txt";
    fp = fopen(filename,"w+");
    fprintf(fp,"This is a file crated by my program \n");
    fprintf(fp,"I am so happy \n");
    fclose(fp);

    FILE *fe;
    char filenameTwo[] = "my_file_two.txt";
    fe = fopen(filenameTwo,"w+");
    //fprintf(fe,"This is file two here for edit \n");
   //fprintf(fe,"This is line two here for update\n");
    fprintf(fe,"This is append test here\n");
    fclose(fe);
    fp = fopen(filename,"w+");
    fprintf(fp,"this is editional test after file close\n");
    fclose(fp);

    FILE *Ffile;
    char nameFile[] = "myFile.txt";
    Ffile = fopen(nameFile,"w");
    fprintf(Ffile,"File operation test three");
    fclose(Ffile);

    printf("\n\n\n");
    printf("---- read value from file and write to others one ---- \n");

    FILE *fp_in,*fp_out;
    char *file_input = "./file/in.txt";
    char *file_output = "./file/out.txt";
    int num1,num2,sum;
    char line[80];

    fp_in = fopen(file_input,"r");
    fp_out = fopen(file_output,"a");

    while(fgets(line,80,fp_in) != NULL ){
        line[strlen(line)-1] = '\0';
        sscanf(line,"%d %d",&num1,&num2);
        sum = num1+num2;
        printf("%d + %d = %d \n",num1,num2,sum);
        fprintf(fp_out,"%d\n",sum);
    }

    fclose(fp_in);
    fclose(fp_out);

    FILE *fp_in_img,*fp_out_img;
    char *input_file_img = "image1.jpg";
    char *output_file_img = "image2.jpg";
    int ch;

    fp_in_img = fopen(input_file_img,"rb");
    if(fp_in_img == NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fp_out_img =  fopen(output_file_img,"wb");
    while(1){
        ch = fgetc(fp_in_img);
        if(ch == EOF){
            break;
        }
        fputc(ch,fp_out_img);
    }
    fclose(fp_in_img);
    fclose(fp_out_img);
    return 0;
}
