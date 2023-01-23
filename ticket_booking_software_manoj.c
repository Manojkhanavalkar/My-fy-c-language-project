/*NAME:MANOJ SADANAND KHANAVALKAR 
  ROLL NO:157
  CLASS:FYBCA(sci)
  DIV:B */ 



#include<stdio.h>
#include<stdlib.h>
#define SCREEN1 250
#define SCREEN2 100
#define SCREEN3 200
#define SCREEN4 300
void m1(int n,int *ptr);
void m2(int n,int *ptr);
void m3(int n, int *ptr);
void m4(int n,int *ptr);

void main()
{
    int choice;
    int p=100,p2=100,p3=100,p4=100,n,pr,t,rs;
    rs=p+p2+p3+p4;
    do
    {
      FILE *fp;
    char ch;
    fp=fopen("movies.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
         break;
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    rs=p+p2+p3+p4;
    
    printf("\n enter your choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        while (p>0)
        {
            printf("\nenter the no of tickets ");
            scanf("%d",&n);
            m1(n,&p);
            printf("\n number of tickets remaing screen 1: %d",p);
            break;
        }
        if(p==0)
          printf("\n\n show is housefull\n\n");
        break;
    case 2: while (p2>0)
        {
            printf("\nenter the no of tickets ");
            scanf("%d",&n);
            m2(n,&p2);
            printf("\n number of tickets remaing for screen 2: %d",p2);
            break;
        }
        if(p2==0)
          printf("\n\n show is housefull\n\n");
        break;
    case 3: while (p3>0)
        {
            printf("\nenter the no of tickets ");
            scanf("%d",&n);
            m3(n,&p3);
            printf("\n number of tickets remaing screen 3: %d",p3);
            break;
        }
        if(p3==0)
          printf("\n\n show is housefull\n\n");
        break; 
    case 4: while (p4>0)
        {
            printf("\nenter the no of tickets ");
            scanf("%d",&n);
            m4(n,&p4);
            printf("\n number of tickets remaing for screen 4: %d",p4);
            break;
        }
        if(p4==0)
          printf("\n\n show is housefull\n\n");
        break;   
    default:exit(0);
        break;
    }
    printf("\n\n");
    } while (rs!=0);
}  
    
    
    
void m1(int n, int *ptr)
{
 int t , paid;
 t=SCREEN1*n;
 
 printf("\n you have pay %d",t);
 printf("\n enter the amount");
 scanf("%d",&paid);
 printf("\n  you are paying:%d",paid);
 if(t==paid)
 {
     printf("\n\n***booking sucessful***");
     *ptr=*ptr-n;
 }
 else
  printf("\n insufficient amount !!!boking cancelled!!!");
}

void m2(int n, int *ptr)
{
 int t , paid;
 t=SCREEN2*n;
 
 printf("\n you have pay %d",t);
 printf("\n enter the amount");
 scanf("%d",&paid);
 printf("\n  you are paying:%d",paid);
 if(t==paid)
 {
     printf("***boking sucessful***");
     *ptr=*ptr-n;
 }
 else
  printf("\n insufficient amount !!!boking cancelled!!!");
}

void m3(int n,int *ptr)
{
 int t , paid;
 t=SCREEN3*n;
 
 printf("\n you have pay %d",t);
 printf("\n enter the amount");
 scanf("%d",&paid);
 printf("\n  you are paying:%d",paid);
 if(t==paid)
 {
     printf("***boking sucessful***");
     *ptr=*ptr-n;
 }
 else
  printf("\n insufficient amount !!!boking cancelled!!!");
}

void m4(int n,int *ptr)
{
 int t , paid;
 t=SCREEN4*n;
 
 printf("\n you have pay %d",t);
 printf("\n enter the amount");
 scanf("%d",&paid);
 printf("\n  you are paying:%d",paid);
 if(t==paid)
 {
     printf("***boking sucessful***");
     *ptr=*ptr-n;
 }
 else
  printf("\n insufficient amount !!!boking cancelled!!!");
}