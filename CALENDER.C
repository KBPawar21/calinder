
  // Program :  Find which day on your birthday & also day of each every date . . .



  #include<stdio.h>

  #include<conio.h>

  void main()

  {

   int d,k,m,f=6,i,r,D,y,Y;

   clrscr();

   printf("\n\n\t\t\t\t WELCOME \n\n\t\t\tHallo !  You can find here . . .");
   printf("\n\n\t WHICH DAY ON YOUR BIRTHDAY WITH ANY DAY OF EACH AND EVERY DATE.\n");

   Lable1:

   printf("\n\n\tSo enter the DATE : ");
   scanf("%d",&D);


   printf("\n\tEnter the MONTH : ");
   scanf("%d",&m);


   printf("\n\tEnter the YEAR : ");
   scanf("%d",&Y);

    if(D>31||m>12)
     {

	 printf("\n\n\t Invalid format of DATE. Retry again . . .");

	 goto Lable1;

      }
     else if(m==2 && D>28)
      {
	 printf("\n\n\t Invalid format of DATE. Retry again . . .");

	 goto Lable1;
      }

    else

     {

      for(y=1950;y<Y;y++)
      {

	for(i=1;i<13;i++)
       {

	if(i<=7)

	{

	 if(i==2)
	  {
	   if(y%4==0)
	    {	     d=29;	    }
	   else
	    {	     d=28;	   }
	  }
	 else if(i%2==0)
	 {	   d=30;	 }
	 else
	 {	   d=31;	 }
       }
       else
       {
	if(i%2==0)
	  {	  d=31;	}
	else
	  {	   d=30;	 }
	}

	f=(f+d)%7;
       }
      // printf("\t%d   %d  ",y,f);

     }//for

     for(i=1;i<m;i++)
     {


      if(i<=7)
      {

       if(i==2)
	 {
	   if(Y%4==0)
	   {	      d=29;	   }
	   else
	   {	     d=28;	   }
	 }
	else if(i%2==0)
		{	   d=30;	}
	else
	  {	   d=31;	}
      }
      else
      {
	if(i%2==0)
		{	  d=31;	}
	else
	     {	   d=30;	}
      }

      f=(f+d)%7;

     // printf("\n\n\t%d   %d",i,f);

       }
      }

      r=(f+D)%7;

     printf("\n\n\n       \t    \t     The DAY at %d",D);

     if(D<20&&D>10)
     {
       printf(" th ");
     }
      else
     {
       k=D%10;

     switch(k)
	{
	      case 1: printf("st ");
		break;
	      case 2: printf("nd ");
		break;
	      case 3: printf("rd ");
		 break;
	      default  :printf("th ");
		break;
	 }
       }
     switch(m)
      {
	     case 1: printf("JANUARY");
	      break;
	     case 2: printf("FEBRUARY");
	      break;
	     case 3: printf("MARCH");
	      break;
	     case 4: printf("APRIL");
	      break;
	     case 5: printf("MAY");
	      break;
	     case 6: printf("JUNE");
	      break;
	     case 7: printf("JULY");
	      break;
	     case 8: printf("AUGUST");
	      break;
	     case 9: printf("SEPTMBER");
	      break;
	      case 10: printf("OCTOBER");
	      break;
	      case 11: printf("NOVEMBER");
	      break;
	      case 12: printf("DECEMBER");
	      break;

	    default:printf("\Invalide input");
	      break;

      }

     printf("  %d   \n\n\t\t\t>>>>",y);

     switch(r)
       {


	     case 1: printf("\tMONDAY");
	      break;
	     case 2: printf("\tTUESDAY");
	      break;
	     case 3: printf("\tWEDNESDAY");
	      break;
	     case 4: printf("\tTHURSDAY");
	      break;
	     case 5: printf("\tFRIDAY");
	      break;
	     case 6: printf("\tSATURDAY");
	      break;
	     case 0: printf("\tSUNDAY");
	      break;

	    default:printf("\Invalide input");
	      break;

	}

	printf("    <<<<",y);

     getch();

  }
