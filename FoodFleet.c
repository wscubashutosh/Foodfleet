#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void Mainmenu(void);
void Customer(void);
void OrderSnack(void);
void cdetails(void);
void aboutproject(void);
int main()
{
    Mainmenu();
    return 0;
}
 int choice; 
 int again; 
 int quantity;
 double total=0;
void Mainmenu(void)
{
    system("cls");
    printf("\t________________________________________\n");
    printf("\t\tWELCOME TO FOOD FLEET\n\n");
    printf("\t1. CUSTOMER CHOICE-->\n\t2. ABOUT THE PROJECT-->\n\t3. EXIT-->\n");
    printf("\t________________________________________\n\n");
    printf("\tEnter your choice-->");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
        Customer();
    }
    else if(choice==2)
    {
     aboutproject();
    }
    else if(choice==3)
    {
        system("cls");
        printf("\n\n\n");
         printf("\t________________________________________\n");
         printf("\t\t\tTHANK YOU\n");
         printf("\t\tFeeling Hungry? Time to Snack!\n");
         printf("\t________________________________________\n");
         exit(0); 
    }
    
}

void Customer(void)
{
    system("cls");
    printf("\t________________________________________\n");
    printf("\tYOU are about to-->\n\t1. Order Snack\n\t2. View Order\n\t3. Back to Main Meun\n\n");
    printf("\tEnter your choice-->");
    int a;
    scanf("%d",&a);
    int load;
    for(load=0;load<=5000;load++)
    {
        printf("\rLoading :%d",load/500);
    }
    if (a==1)
    {
        system("cls");
        OrderSnack();
    }
    else if (a==2)
    {
      FILE*Vorder;
      char v;
      Vorder=fopen("order.txt","r");
      while((v=fgetc(Vorder))!=EOF)
      {
          printf("%c",v);
      }
      if(getch())
      Customer();
    }
    else if (a==3)
    {
       system("cls"); 
       Mainmenu(); 
    }
    else
    {
         printf("\t Wrong input! Kindly input correct option...\n\n");
         Customer();
    }
    
}
void OrderSnack(void)
{
 printf("\t________________________________________\n");
 printf("\t\t\tSNACK MENU\n");
 printf("\t________________________________________\n");
 printf("\t\tINPUT NUMBER FOR SELECTED MENU\n\n\t#1 Burger\t45.00\n\t#2 Fries\t70.00\n\t#3 Onion ring\t60.00\n\t#4 Pizza\t100.00\n\n\t#5 Back to Main Menu\n");
 printf("\tEnter your choice-->");
 char s;
 FILE*snkmenu;
 snkmenu=fopen("menu.txt","rt");
while ((s=getc(snkmenu))!=EOF)
{
  printf("%c",s);
}
 fclose(snkmenu);
 printf("\n\nInput Customer Order:");
 printf("\n\n");
 scanf("%d",&choice);
 if(choice==1)
{
    printf("Quantity: ");
    scanf("%d",&quantity);
   total=total+45*(quantity);
    printf("\n");
    printf("\tPress 1 To Order Again:\n\tPress 2 To Get Your Total:\n\n");
    printf("\tEnter your choice-->");
    scanf("%d",&again);
    printf("\n");
    if(again==1)
    {
        printf("\n\n");
         OrderSnack();
    }
    else if (again==2)
    {
        printf("Your Total Amount is: %.2f\n\n",total);
        int totl=total;
        FILE*ttl;
        ttl=fopen("order.txt","b");
        fprintf(ttl,"\nGrand Total:%d\n",totl);
        fclose(ttl);
        cdetails();
    }
}
else if (choice==2)
    {
        printf("Quantity: ");
     scanf("%d",&quantity);
      total=total+70*(quantity);
     printf("\n");
     printf("\tPress 1 To Order Again:\n\tPress 2 To Get Your Total:\n\n");
     printf("\tEnter your choice-->");
     scanf("%d",&again);
     printf("\n");
    if(again==1)
    {
        printf("\n\n");
         OrderSnack();
    }
    else if (again==2)
    {
        printf("Your Total Amount is: %.2f\n\n",total);
        int totl=total;
        FILE*ttl;
        ttl=fopen("order.txt","b");
        fprintf(ttl,"\nGrand Total:%d\n",totl);
        fclose(ttl);
       cdetails();
    }
} 

else if (choice==3)
    {
        printf("Quantity: ");
     scanf("%d",&quantity);
     total=total+60*(quantity);
     printf("\n");
     printf("\tPress 1 To Order Again:\n\tPress 2 To Get Your Total:\n\n");
     printf("\tEnter your choice-->");
     scanf("%d",&again);
     printf("\n");
    if(again==1)
    {
        printf("\n\n");
         OrderSnack();
    }
    else if (again==2)
    {
        printf("Your Total Amount is: %.2f\n\n",total);
        int totl=total;
        FILE*ttl;
        ttl=fopen("order.txt","b");
        fprintf(ttl,"\nGrand Total:%d\n",totl);
        fclose(ttl);
       cdetails();
    }
    
}
else if (choice==4)
    {
        printf("Quantity: ");
     scanf("%d",&quantity);
     total=total+100*(quantity);
     printf("\n");
     printf("\tPress 1 To Order Again:\n\tPress 2 To Get Your Total:\n");
     printf("\tEnter your choice-->");
     scanf("%d",&again);
     printf("\n");
    if(again==1)
    {
        printf("\n\n");
         OrderSnack();
    }
    else if (again==2)
    {
        printf("Your Total Amount is: %.2f\n\n",total);
        int totl=total;
        FILE*ttl;
        ttl=fopen("order.txt","b");
        fprintf(ttl,"\nGrand Total:%d\n",totl);
        fclose(ttl);
      cdetails();
    }
    
}
else if (choice==5)
{
    system("cls");
    Customer();
}
else
{
   printf("\t Wrong input! Kindly input correct option...\n\n");
   if (getch())
   OrderSnack(); 
}
}

void cdetails(void)
{
    char fname[50];
    char lname[50];
    long long int phone;
    printf("\tInput Customer Details\n");
    printf("First Name: ");
    scanf("%s",&fname);
    printf("Last Name: ");
    scanf("%s",&lname);
    printf("Phone: ");
    scanf("%lld",&phone);
    printf("\n\n");
    printf("Your Details Entered Are-->\n");
    FILE*cust;
    cust=fopen("order.txt","b");
    fprintf(cust,"Order y:%s %s\nPhone Number: %lld",fname,lname,phone);
    fclose(cust);
    printf("-->First Name: %s\n-->Last Name: %s\n-->Phone: %lld\n",fname,lname,phone);
    printf("\n\n\n");
    printf("\t________________________________________\n");
    printf("\t\tYour Order will be in 10 minutes..\n");
    printf("\t\tTHANK YOU...\n");
    printf("\t________________________________________\n");
    printf("Press Any Back to Main Menu\n");
    if(getch())
    Mainmenu();
}
void aboutproject(void)
{
   system("cls");
   printf("\n\n\n");
   printf("\tThis is My C Mini Project....");
   if(getch())
   Mainmenu();
}
