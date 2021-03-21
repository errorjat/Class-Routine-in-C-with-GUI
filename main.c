#include <stdio.h>
#include <conio.h>          // Header File Declare
#include <stdlib.h>
#include <string.h>
//#include <windows.h>
int menu();
int main()
{

    system("cls");
    system("color a1");
    int z;
    char stid [20];
    printf("\n\n\n\t\tThis is just a Class Routine Program....\n\n");
    printf("\t\tPlease Wait your program is Loading\n\n");
    for(z=1;z<=60;z++)
    {printf("*");
    _sleep(50);
    }
    printf("\nEnter your Student ID");
    scanf("%s",&stid);

    system("cls");

    menu();



}
int menu()
{
    top:
    system("color 1a");
    printf("\n\n\t     Sonargaon University"
           "\n\tComputer Science and Engineering"
           "\n\t       12-A ( Hemlock )"
           "\n\t        Class Routine\n\n");
    int op;
    printf("\tEnter 1 for Search Classroutine By Date\n"
           "\tEnter 2 for Search Classroutine By Day\n"
           "\tEnter 3 for Today's Classroutine\n"
           "\tEnter 4 for Tomorrow's Classroutine\n\n");
    scanf("%d",&op);
    switch (op){
    case 1:
    date();
    break;
    case 2:
    day();
    break;
    case 3:
    Today();
    break;
    case 4:
    Tomorrow();
    break;
    default:
    printf("\t\tWrong Input!!!\n");
    _sleep(400);
    goto top;
}
}
int date()
{
    system("color 2e");
    int d,m,y;
    printf("\t\tEnter Date  : ");
    scanf("%d",&d);
    printf("\t\tEnter Month : ");
    scanf("%d",&m);
    printf("\t\tEnter Year  : ");
    scanf("%d",&y);
    if(y==2019&&m==2&&d==21)
    {
      printf("\t\tToday is Shahid day and International Mother Language Day\n\n");
      done();
    }
    else if(y==2019&&m==3&&d==17)
    {
      printf("\t\tToday is Sheikh Mujibur's Birthday\n");
      done();
    }
    else if(y==2019&&m==3&&d==26)
    {
        printf("\t\tToday is Independence Day\n");
        done();
    }
    else if(y==2019&&m==4&&d==14)
    {
        printf("\t\tToday is Bangali New Year (NoboBarsha)\n");
        done();
    }
    else if(y==2019&&m==4&&d==21)
    {
        printf("\t\tToday is Shab E Barat\n");
        done();
    }
    else if(y==2019&&m==5&&d==1)
    {
        printf("\t\tToday is May Day\n");
        done();
    }
    else if(y==2019&&m==5&&d==18)
    {
        printf("\t\tToday is Buddha Purnima\n");
        done();
    }
    else if(y==2019&&m==5&&d==31)
    {
        printf("\t\tToday is Jamatul Bidha\n");
        done();
    }
    else if(y==2019&&m==6&&d==3)
    {
        printf("\t\tToday is Laylatul Quador\n");
        done();
    }
    else if(y==2019&&m==6&&d==5)
    {
        printf("\t\tToday is Eid-Ul-Fitar\n");
        done();
    }
    else if(y==2019&&m==8&&d==12)
    {
        printf("\t\tToday is Eid-Ul-Azha\n");
        done();
    }
    else if(y==2019&&m==8&&d==15)
    {
        printf("\t\tToday is National Muring Day\n");
        done();
    }
    else if(y==2019&&m==8&&d==23)
    {
        printf("\t\tToday is Shuvo Janmastami\n");
        done();
    }
    else if(y==2019&&m==9&&d==10)
    {
        printf("\t\tToday is Ashura");
        done();
    }
    else if(y==2019&&m==10&&d==8)
    {
        printf("\t\tToday is Bijoy Dashami\n");
        done();
    }
    else if(y==2019&&m==11&&d==10)
    {
        printf("\t\tToday is Eid-e-milad-und-nobi\n");
        done();
    }
    else if(y==2019&&m==12&&d==16)
    {
        printf("\t\tToday is Victory Day\n");
        done();
    }
    else if(y==2019&&m==12&&d==25)
    {
        printf("\t\tToday is Christmas Day\n");
        done();
    }
    else
    {
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	int day = ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
	if(day==0) SUNDAY();
	else if(day==1) MONDAY();
	else if(day==2) TUESDAY();
	else if(day==3) WEDNESDAY();
    else if(day==4) THURSDAY();
    else if(day==5) FRIDAY();
    else if(day==6) SATURDAY();
    else {printf("\t\tWrong Input!!!\n"); _sleep(400);menu();}
    }
}
int day()
{
    char da[20],a[]="SATURDAY",b[]="SUNDAY",c[]="MONDAY",d[]="TUESDAY",e[]="WEDNESDAY",f[]="THURSDAY",g[]="FRIDAY";
    printf("\n\t\tEnter Day as like Saturday,Sunday...\n");
    scanf("%s",&da);
    upper_string(da);
    if(strcmp(da,a)==0){               // Compare String Between input and variables
    SATURDAY();                            // Calling Saturday Function
    }
    else if(strcmp(da,b)==0){           // Compare String Between input and variables
    SUNDAY();                            // Calling Sunday Function
    }
    else if(strcmp(da,c)==0){           // Compare String Between input and variables
    MONDAY();                             // Calling Monday Function
    }
    else if(strcmp(da,d)==0){           // Compare String Between input and variables
    TUESDAY();                             // Calling Tuesday Function
    }
    else if(strcmp(da,e)==0){           // Compare String Between input and variables
    WEDNESDAY();                             // Calling Wednessday Function
    }
    else if(strcmp(da,f)==0){           // Compare String Between input and variables
    THURSDAY();                             // Calling Thursday Function
    }
    else if(strcmp(da,g)==0){           // Compare String Between input and variables
    FRIDAY();                             // Calling Friday Function
    }
}

void upper_string(char s[]) { // Convert any string to uppercase
   int c = 0;

   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
   }
}

int SATURDAY()
{

    system("cls");                      // Clear Screen
    system("color 3E");                 // Screen Color Declare

     printf("\n\n\t      Sonargaon University"
           "\n\tComputer Science and Engineering"
           "\n\t       12-A ( Hemlock )"
           "\n\t         Class Routine\n\n\n");
    printf("\n   10:30am - 11:45am:\n\t"
       "\tCourse Code : EEE-223 \n\t"
       "\tCourse Title: Electronic Engineering\n\t"
       "\tRoom No.    : West - 513 (4th Floor)\n\t"
       "\tTeacher Name: Abdullah Al Mamon\n\t"
       "\tMobile      : 01955529782\n\t"
       "\tEmail       : almamun789.aa@gmail.com\n\n");


    printf("\n   12:00pm - 01:15pm:\n\t"
       "\tCourse Code : HUM-223\n\t"
       "\tCourse Title: Society & Technology\n\t"
       "\tRoom No.    : West - 513 (4th Floor)\n\t"
       "\tTeacher Name: Afrina Khan\n\t"
       "\tMobile      : 01704885088\n\t"
       "\tEmail       : afrinakhandu@gmail.com\n\n");

    printf("\n   01:30pm - 02:45pm:\n\t"
       "\tCourse Code : CSE-313\n\t"
       "\tCourse Title: Theory of Computation\n\t"
       "\tRoom No.    : West - 513 (4th Floor)\n\t"
       "\tTeacher Name: Bulbul Ahamed\n\t"
       "\tMobile      : 01955529841\n\t"
       "\tEmail       : bulbul2767@gmail.com\n\n");
    done();
}

int SUNDAY()
{
    system("cls");                      // Clear Screen
    system("color 3E");                 // Screen Color Declare

     printf("\n\n\t      Sonargaon University"
           "\n\tComputer Science and Engineering"
           "\n\t       12-A ( Hemlock )"
           "\n\t         Class Routine\n\n\n");
    printf("\n   12:30pm - 01:45pm:\n\t"
       "\tCourse Code : CSE-221\n\t"
       "\tCourse Title: Algorithms\n\t"
       "\tRoom No     : West - 606 (5th Floor)\n\t"
       "\tTeacher Name: Khadija Islam\n\t"
       "\tMobile      : 01955529846\n\t"
       "\tEmail       : khadijaislam2008@gmail.com\n\n");

    printf("\n   01:30pm - 04:00pm:\n\t"
       "\tCourse Code : CSE-222\n\t"
       "\tCourse Title: Algorithms Sessional\n\t"
       "\tRoom No     : West - 612 (5th Floor)\n\t"
       "\tTeacher Name: Khadija Islam\n\t"
       "\tMobile      : 01955529846\n\t"
       "\tEmail       : khadijaislam2008@gmail.com\n\n");
    done();
}

int MONDAY(){
    system("cls");                      // Clear Screen
    system("color FC");                 // Screen Color Declare

    printf("\n\n\t      Sonargaon University"
           "\n\tComputer Science and Engineering"
           "\n\t       12-A ( Hemlock )"
           "\n\t         Class Routine\n\n\n");
    printf("\n\n\n\a!!!!!!!!!!!!!!!!!!!!!!---No Class---!!!!!!!!!!!!!!!!!!!!!!\n\n\n\a");
    done();
}

int TUESDAY()
{
    system("cls");                      // Clear Screen
    system("color 3E");                 // Screen Color Declare

     printf("\n\n\t      Sonargaon University"
           "\n\tComputer Science and Engineering"
           "\n\t       12-A ( Hemlock )"
           "\n\t         Class Routine\n\n\n");
    printf("\n   10:30am - 01:15pm:\n\t"
       "\tCourse Code : EEE-224\n\t"
       "\tCourse Title: Electronic Engineering Sessional\n\t"
       "\tRoom No     : West - 510 (4th Floor)\n\t"
       "\tTeacher Name: Abdullah Al Mamon\n\t"
       "\tMobile      : 01955529782\n\t"
       "\tEmail       : almamun789.aa@gmail.com\n\n");

    printf("\n   01:30pm - 02:45pm:\n\t"
       "\tCourse Code : CSE-221 \n\t"
       "\tCourse Title: Algorithms\n\t"
       "\tRoom No     : West - 606 (5th Floor)\n\t"
       "\tTeacher Name: Khadija Islam\n\t"
       "\tMobile      : 01955529846\n\t"
       "\tEmail       : khadijaislam2008@gmail.com\n\n");
       done();
}

int WEDNESDAY()
{
    system("cls");                      // Clear Screen
     system("color FC");                 // Screen Color Declare

    printf("\n\n\t      Sonargaon University"
           "\n\tComputer Science and Engineering"
           "\n\t       12-A ( Hemlock )"
           "\n\t         Class Routine\n\n\n");
    printf("\n\n\n\a!!!!!!!!!!!!!!!!!!!!!!---No Class---!!!!!!!!!!!!!!!!!!!!!!\n\n\n\a");
    done();
}

int THURSDAY()
{
    system("cls");                      // Clear Screen
    system("color 3E");                 // Screen Color Declare
     printf("\n\n\t      Sonargaon University"
           "\n\tComputer Science and Engineering"
           "\n\t       12-A ( Hemlock )"
           "\n\t         Class Routine\n\n\n");

    printf("\n   10:30am - 11:45am:\n\t"
       "\tCourse Code : EEE-223 \n\t"
       "\tCourse Title: Electronic Engineering\n\t"
       "\tRoom No     : West - 511 (4th Floor)\n\t"
       "\tTeacher Name: Abdullah Al Mamon\n\t"
       "\tMobile      : 01955529782\n\t"
       "\tEmail       : almamun789.aa@gmail.com\n\n");

    printf("\n   12:00pm - 01:15pm:\n\t"
       "\tCourse Code : CSE-313\n\t"
       "\tCourse Title: Theory of Computation\n\t"
       "\tRoom No     : West - 511 (4th Floor)\n\t"
       "\tTeacher Name: Bulbul Ahamed\n\t"
       "\tMobile      : 01955529841\n\t"
       "\tEmail       : bulbul2767@gmail.com\n\n");

    printf("\n   01:30pm - 02:45pm:\n\t"
       "\tCourse Code : HUM-223\n\t"
       "\tCourse Title: Society & Technology\n\t"
       "\tRoom No     : West - 511 (4th Floor)\n\t"
       "\tTeacher Name: Afrina Khan\n\t"
       "\tMobile      : 01704885088\n\t"
       "\tEmail       : afrinakhandu@gmail.com\n\n");
        done();
}

int FRIDAY()
{
    system("cls");                      // Clear Screen
     system("color FC");                // Screen Color Declare

    printf("\n\n\t      Sonargaon University"
           "\n\tComputer Science and Engineering"
           "\n\t       12-A ( Hemlock )"
           "\n\t         Class Routine\n\n\n");
    printf("\n\n\n\a!!!!!!!!!!!!!!!!!!!!!!---No Class---!!!!!!!!!!!!!!!!!!!!!!\n\n\n\a");
    done();
}

int done()
{
    char da[]="HM Jubayer";  // Declare Variable
    int op,j,smile=1;
    again:                              // For Return Here
    printf("\n\tEnter 1 for Exit\n"
           "\n\tEnter 2 for Selection Menu\n");
           scanf("%d",&op);
           switch(op){                  // Using Switch Case for Operator
           case 1:
           printf("\n\t\tThank You\n");
           printf("\n\t\t Made By");
    printf("\n\n\t\t");
    for(j=0;j<=strlen(da);j++){
        _sleep(100);                // Delay This Program for 100 m/s
    printf("%c",da[j]);
    }
    printf("\n\n\t\t%c %c %c %c %c",smile,smile,smile,smile,smile);

    printf("\n\n");
        _sleep(700);                // Delay This Program for 700 m/s
        return 0;
           break;

           case 2:
           menu();               // Return to Top

           default:
           system("cls");           // Clear Screen
           printf("\a\a\n!!!!Wrong Input!!!\n\n");
           goto again;
}
}

int Today()
{
    system(time_t(t));
    GetLocalTime(&t);
    int d=t.wDay;
    int m=t.wMonth;
    int y=t.wYear;
    if(y==2019&&m==2&&d==21)
    {
      printf("Today is Shahid day and International Mother Language Day\n\n");
      done();
    }
    else if(y==2019&&m==3&&d==17)
    {
      printf("Today is Sheikh Mujibur's Birthday\n");
      done();
    }
    else if(y==2019&&m==3&&d==26)
    {
        printf("Today is Independence Day\n");
        done();
    }
    else if(y==2019&&m==4&&d==14)
    {
        printf("Today is Bangali New Year (NoboBarsha)\n");
        done();
    }
    else if(y==2019&&m==4&&d==21)
    {
        printf("Today is Shab E Barat\n");
        done();
    }
    else if(y==2019&&m==5&&d==1)
    {
        printf("Today is May Day\n");
        done();
    }
    else if(y==2019&&m==5&&d==18)
    {
        printf("Today is Buddha Purnima\n");
        done();
    }
    else if(y==2019&&m==5&&d==31)
    {
        printf("Today is Jamatul Bidha\n");
        done();
    }
    else if(y==2019&&m==6&&d==3)
    {
        printf("Today is Laylatul Quador\n");
        done();
    }
    else if(y==2019&&m==6&&d==5)
    {
        printf("Today is Eid-Ul-Fitar\n");
        done();
    }
    else if(y==2019&&m==8&&d==12)
    {
        printf("Today is Eid-Ul-Azha\n");
        done();
    }
    else if(y==2019&&m==8&&d==15)
    {
        printf("Today is National Muring Day\n");
        done();
    }
    else if(y==2019&&m==8&&d==23)
    {
        printf("Today is Shuvo Janmastami\n");
        done();
    }
    else if(y==2019&&m==9&&d==10)
    {
        printf("Today is Ashura");
        done();
    }
    else if(y==2019&&m==10&&d==8)
    {
        printf("Today is Bijoy Dashami\n");
        done();
    }
    else if(y==2019&&m==11&&d==10)
    {
        printf("Today is Eid-e-milad-und-nobi\n");
        done();
    }
    else if(y==2019&&m==12&&d==16)
    {
        printf("Today is Victory Day\n");
        done();
    }
    else if(y==2019&&m==12&&d==25)
    {
        printf("Today is Christmas Day\n");
        done();
    }
    else
    {
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	int day = ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
	if(day==0) SUNDAY();
	else if(day==1) MONDAY();
	else if(day==2) TUESDAY();
	else if(day==3) WEDNESDAY();
    else if(day==4) THURSDAY();
    else if(day==5) FRIDAY();
    else if(day==6) SATURDAY();
    else {printf("Wrong Input!!!\n"); _sleep(400);menu();}
    }

}
int Tomorrow()
{
     SYSTEMTIME t;
    GetLocalTime(&t);
    int d=t.wDay+1;
    int m=t.wMonth;
    int y=t.wYear;
    if(y==2019&&m==2&&d==21)
    {
      printf("Today is Shahid day and International Mother Language Day\n\n");
      done();
    }
    else if(y==2019&&m==3&&d==17)
    {
      printf("Today is Sheikh Mujibur's Birthday\n");
      done();
    }
    else if(y==2019&&m==3&&d==26)
    {
        printf("Today is Independence Day\n");
        done();
    }
    else if(y==2019&&m==4&&d==14)
    {
        printf("Today is Bangali New Year (NoboBarsha)\n");
        done();
    }
    else if(y==2019&&m==4&&d==21)
    {
        printf("Today is Shab E Barat\n");
        done();
    }
    else if(y==2019&&m==5&&d==1)
    {
        printf("Today is May Day\n");
        done();
    }
    else if(y==2019&&m==5&&d==18)
    {
        printf("Today is Buddha Purnima\n");
        done();
    }
    else if(y==2019&&m==5&&d==31)
    {
        printf("Today is Jamatul Bidha\n");
        done();
    }
    else if(y==2019&&m==6&&d==3)
    {
        printf("Today is Laylatul Quador\n");
        done();
    }
    else if(y==2019&&m==6&&d==5)
    {
        printf("Today is Eid-Ul-Fitar\n");
        done();
    }
    else if(y==2019&&m==8&&d==12)
    {
        printf("Today is Eid-Ul-Azha\n");
        done();
    }
    else if(y==2019&&m==8&&d==15)
    {
        printf("Today is National Muring Day\n");
        done();
    }
    else if(y==2019&&m==8&&d==23)
    {
        printf("Today is Shuvo Janmastami\n");
        done();
    }
    else if(y==2019&&m==9&&d==10)
    {
        printf("Today is Ashura");
        done();
    }
    else if(y==2019&&m==10&&d==8)
    {
        printf("Today is Bijoy Dashami\n");
        done();
    }
    else if(y==2019&&m==11&&d==10)
    {
        printf("Today is Eid-e-milad-und-nobi\n");
        done();
    }
    else if(y==2019&&m==12&&d==16)
    {
        printf("Today is Victory Day\n");
        done();
    }
    else if(y==2019&&m==12&&d==25)
    {
        printf("Today is Christmas Day\n");
        done();
    }
    else
    {
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	int day = ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
	if(day==0) SUNDAY();
	else if(day==1) MONDAY();
	else if(day==2) TUESDAY();
	else if(day==3) WEDNESDAY();
    else if(day==4) THURSDAY();
    else if(day==5) FRIDAY();
    else if(day==6) SATURDAY();
    else {printf("Wrong Input!!!\n"); _sleep(400);menu();}
    }

}

