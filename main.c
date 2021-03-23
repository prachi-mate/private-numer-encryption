#include <stdio.h>
#include <stdlib.h>

void encrypt()
{

    int k=0,i=0,j=0,x=0,y=0,n[20],dn[10],en[20];
	char ch;
    FILE *fp=NULL;

	fp=fopen("C:/Users/prach/OneDrive/Desktop/COLLEGE/S.Y.BTech/SEMESTER 3/DATA STRUCTURES - I/PROJECT- Private Number Encryption/decrypted.txt","r");
    while(fp!=EOF)
    {
	fscanf(fp,"%s",ch);
	printf("\n FROM FILE : %s",ch);
    }

    printf("/n Data Obtained From File:");
    for(i=0;i<4;i++)
    {
	printf("%d",n[i]);
	}

	/*ENCRYPTION KEY*/
	j=0;
	for(i=0;i<4;i=i+2)
	{
	x=(n[i]*10)+(n[i+1]);
	en[j]=x/4;
	en[j+1]=x%4;
	j=j+2;
	}



    printf("\n Encrypted Number In Numeric Form Is :");
    for(k=0;k<4;k++)
    {
     printf("%d",en[k]);
    }

	printf("\n Encrypted Number In Coded Form Is :");
	for(k=0;k<4;k++)
	{
		if(dn[k]==0)
		{
			printf("|");
		}
		if(dn[k]==1)
		{
			printf("!");
		}
		if(dn[k]==2)
		{
			printf("@");
		}
		if(dn[k]==3)
		{
			printf("#");
		}
		if(dn[k]==4)
		{
			printf("$");
		}
		if(dn[k]==5)
		{
			printf("%");
		}
		if(dn[k]==6)
		{
			printf("^");
		}
		if(dn[k]==7)
		{
			printf("&");
		}
		if(dn[k]==8)
		{
			printf("*");
		}
		if(dn[k]==9)
		{
			printf("?");
		}

	}

	fclose(fp);

}



void decrypt()
{
	int j=0,i=0,k=0,x=0,y=0,n[20],dn[20];
	char ch[10];
    FILE *fp=NULL;

	fp=fopen("C:/Users/prach/OneDrive/Desktop/COLLEGE/S.Y.BTech/SEMESTER 3/DATA STRUCTURES - I/PROJECT- Private Number Encryption/ encrypted.txt","r");
    while(fp!=EOF)
    {
	fscanf(fp,"%s",ch);
	printf("\n Code: %s",ch);
	}


	for(j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
		{
	    if(ch[i]=='|')
		{
			n[j]=0;
			printf("0");
		}
		if(ch[i]=='!')
		{
			n[j]=1;
			printf("1");
		}
		if(ch[i]=='@')
		{
			n[j]=2;
			printf("2");
		}
		if(ch[i]=='#')
		{
			n[j]=3;
			printf("3");
		}
		if(ch[i]=='$')
		{
			n[j]=4;
			printf("4");
		}
		if(ch[i]=='%')
		{
			n[j]=5;
			printf("5");
		}
		if(ch[i]=='^')
		{
			n[j]=6;
			printf("6");
		}
		if(ch[i]=='&')
		{
			n[j]=7;
			printf("7");
		}
		if(ch[i]=='*')
		{
			n[j]=8;
			printf("8");
		}
		if(ch[i]=='?')
		{
			n[j]=9;
			printf("9");
		}

	printf("/n Data Obtained From File:");
    for(i=0;i<4;i++)
    {
	printf("%d",n[i]);
	}

	/*Decryption Key*/
	k=0;
	for(i=0;i<4;i=i+2)
     {
	  y=(n[i]*4)+(n[i+1]);
      dn[k]=y;
      k++;
     }

	printf("\n Decrypted Number Is :");
    for(k=0;k<4;k++)
    {
     printf("%d",dn[k]);
    }

	}
	}

 	fclose(fp);

}


void main()
{
int choice=0;


printf("\n Menu : \n (1) Encryption \n (2) Decryption \n (3) View The Algorithm \n (4) View The Key To Encryption And Decryption (5) Exit \n ENTER YOUR CHOICE :");
scanf("%d",&choice);


do
{
switch(choice)
{
	case 1 : en();
	         break;
	case 2 : de();
	         break;
	//case 3 : algorithm();
	 //		 break;
	/*case 4 : key();
			 break;
	case 5 : printf("EXITING...");
	         break;*/
	default: printf("Please Enter A Valid Choice !!");
}
}while(choice!=5);

getch();
}


void en()
{

    int k=0,i=0,j=0,x=0,y=0,n[20],dn[10],en[20];
	char ch;
    FILE *fp=NULL;

	fp=fopen("C:/Users/prach/OneDrive/Desktop/COLLEGE/S.Y.BTech/SEMESTER 3/DATA STRUCTURES - I/PROJECT- Private Number Encryption / decrypted.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
     printf("\n %c",ch);
     n[i]=(int)ch-48;
     i++;
    }

    printf("/n Data Obtained From File:");
    for(i=0;i<4;i++)
    {
	printf("%d",n[i]);
	}

	/*ENCRYPTION KEY*/
	j=0;
	for(i=0;i<4;i=i+2)
	{
	x=(n[i]*10)+(n[i+1]);
	en[j]=x/4;
	en[j+1]=x%4;
	j=j+2;
	}



    printf("\n Encrypted Number In Numeric Form Is :");
    for(k=0;k<4;k++)
    {
     printf("%d",en[k]);
    }

	printf("\n Encrypted Number In Coded Form Is :");
	for(k=0;k<4;k++)
	{
		if(dn[k]==0)
		{
			printf("|");
		}
		if(dn[k]==1)
		{
			printf("!");
		}
		if(dn[k]==2)
		{
			printf("@");
		}
		if(dn[k]==3)
		{
			printf("#");
		}
		if(dn[k]==4)
		{
			printf("$");
		}
		if(dn[k]==5)
		{
			printf("%");
		}
		if(dn[k]==6)
		{
			printf("^");
		}
		if(dn[k]==7)
		{
			printf("&");
		}
		if(dn[k]==8)
		{
			printf("*");
		}
		if(dn[k]==9)
		{
			printf("?");
		}

	}

}



void de()
{
	int j=0,i=0,k=0,x=0,y=0,n[20],dn[20];
	char ch[10];
    FILE *fp=NULL;

	fp=fopen("C:/Users/prach/OneDrive/Desktop/COLLEGE/S.Y.BTech/SEMESTER 3/DATA STRUCTURES - I/PROJECT- Private Number Encryption/encrypted.txt","r");
    while(fp!=EOF)
    {
	fscanf(fp,"%s",ch);
	printf("\n Code: %s",ch);
	}


	for(j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
		{
	    if(ch[i]=='|')
		{
			n[j]=0;
			printf("0");
		}
		if(ch[i]=='!')
		{
			n[j]=1;
			printf("1");
		}
		if(ch[i]=='@')
		{
			n[j]=2;
			printf("2");
		}
		if(ch[i]=='#')
		{
			n[j]=3;
			printf("3");
		}
		if(ch[i]=='$')
		{
			n[j]=4;
			printf("4");
		}
		if(ch[i]=='%')
		{
			n[j]=5;
			printf("5");
		}
		if(ch[i]=='^')
		{
			n[j]=6;
			printf("6");
		}
		if(ch[i]=='&')
		{
			n[j]=7;
			printf("7");
		}
		if(ch[i]=='*')
		{
			n[j]=8;
			printf("8");
		}
		if(ch[i]=='?')
		{
			n[j]=9;
			printf("9");
		}

	printf("/n Data Obtained From File:");
    for(i=0;i<4;i++)
    {
	printf("%d",n[i]);
	}

	/*Decryption Key*/
	k=0;
	for(i=0;i<4;i=i+2)
     {
	  y=(n[i]*4)+(n[i+1]);
      dn[k]=y;
      k++;
     }

	printf("\n Decrypted Number Is :");
    for(k=0;k<4;k++)
    {
     printf("%d",dn[k]);
    }

	}
	}



}
