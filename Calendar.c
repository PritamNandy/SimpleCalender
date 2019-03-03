//PRASUN NANDY PRITAM//
//ID: 1410844042//
#include<stdio.h>
int main()
{
    int y,m,d,h,i;
    printf("Enter the Year:");
    scanf("%d",&y);
    printf("Enter the Month(1-12):");
    scanf("%d",&m);

	if(y<1 || m<1 || m>12) printf("\nInvalid Date.Please Check.\n");
	else{
    printf("\nCalendar for:\n\n");

    switch(m){
    case 1: printf("January");
		   break;
    case 2: printf("February");
           break;
    case 3: printf("March");
		   break;
    case 4: printf("April");
	       break;
    case 5: printf("May");
	       break;
    case 6: printf("June");
		   break;
    case 7: printf("July");
	        break;
    case 8: printf("August");
	        break;
    case 9: printf("September");
	        break;
    case 10: printf("October");
			 break;
    case 11: printf("November");
			 break;
    default: printf("December");
	         break;
    }
    printf(" %d\n\n",y);
    printf("SAT\tSUN\tMON\tTUE\tWED\tTHU\tFRI\n");

    if((y%4==0 && y%100!=0 || y%400==0) && m==2 ) d=29;
	else if((y%4!=0 || y%100==0) && m==2) d=28;
	else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) d=31;
	else d=30;

    if(m<3){
        m=m+12;
		y=y-1;
	}

    if(i=1){
    (h=((i+((26*(m+1))/10)+y+(y/4)+6*(y/100)+(y/400))%7));
    if(h==0) ;
    else if(h==1) printf("\t");
    else if(h==2) printf("\t\t");
    else if(h==3) printf("\t\t\t");
    else if(h==4) printf("\t\t\t\t");
    else if(h==5) printf("\t\t\t\t\t");
    else printf("\t\t\t\t\t\t");
    }

    for(i=1;i<=d;i++){
    switch(h=((i+((26*(m+1))/10)+y+(y/4)+6*(y/100)+(y/400))%7)){
    case 0: printf("\n%d\t",i);
            break;
    case 1: printf("%d\t",i);
            break;
    case 2: printf("%d\t",i);
            break;
    case 3: printf("%d\t",i);
            break;
    case 4: printf("%d\t",i);
            break;
    case 5: printf("%d\t",i);
            break;
    default: printf("%d\t",i);
            break;
      }
    }
    printf("\n");
  }
}
