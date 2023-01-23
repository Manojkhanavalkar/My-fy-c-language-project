/* NAME:MANOJ SADANAND KHANAVALKAR 
  ROLL NO:157
  CLASS:FYBCA(sci)
  DIV:B */ 



#include<stdio.h>
void m1(int n, int pr,int *ptr);
void m2(int n, int pr,int *ptr);
void m3(int n, int pr,int *ptr);
void m4(int n, int pr,int *ptr);

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
            printf("\nenter the no of tickets and price of tickets");
            scanf("%d%d",&n,&pr);
            m1(n,pr,&p);
            printf("\n number of tickets remaing movie 1: %d",p);
            break;
        }
        if(p==0)
          printf("\n\n show is housefull\n\n");
        break;
    case 2: while (p2>0)
        {
            printf("\nenter the no of tickets and price of tickets");
            scanf("%d%d",&n,&pr);
            m2(n,pr,&p2);
            printf("\n number of tickets remaing for movie 2: %d",p2);
            break;
        }
        if(p2==0)
          printf("\n\n show is housefull\n\n");
        break;
    case 3: while (p3>0)
        {
            printf("\nenter the no of tickets and price of tickets");
            scanf("%d%d",&n,&pr);
            m3(n,pr,&p3);
            printf("\n number of tickets remaing movie 3: %d",p3);
            break;
        }
        if(p3==0)
          printf("\n\n show is housefull\n\n");
        break; 
    case 4: while (p4>0)
        {
            printf("\nenter the no of tickets and price of tickets");
            scanf("%d%d",&n,&pr);
            m4(n,pr,&p4);
            printf("\n number of tickets remaing for movie 4: %d",p4);
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
    
    
    
void m1(int n, int pr,int *ptr)
{
 int t , paid;
 t=pr*n;
 
 printf("\n you have pay %d",t);
 printf("\n enter the amount");
 scanf("%d",&paid);
 printf("\n  you are paying:%d",paid);
 if(t==paid)
 {
     printf("\n\n***boking sucessful***");
     *ptr=*ptr-n;
 }
 else
  printf("\n insufficient amount !!!boking cancelled!!!");
}

void m2(int n, int pr,int *ptr)
{
 int t , paid;
 t=pr*n;
 
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

void m3(int n, int pr,int *ptr)
{
 int t , paid;
 t=pr*n;
 
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

void m4(int n, int pr,int *ptr)
{
 int t , paid;
 t=pr*n;
 
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