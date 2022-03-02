void displayList(FILE * fp)
{   printHead();
printf("\n\t\t\t\List  of Employees");
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)
    {
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tGENDER : %s",e.gender);
        printf("\n\n\t\tBRANCH : %s",e.branch);
        printf("\n\n\t\tSALARY : %.2f",e.sal);
        printf("\n\n\t\tPRESENT ADDRESS : %s",e.psaddr);
        printf("\n\n\t\tPERMANANT ADDRESS : %s",e.prtaddr);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s\n\n\t",e.mail);
        printChar('=',65);
    }
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}


//================SEARCH EMPLOYEE==
void searchRecord(FILE *fp)
{printHead();
printf("\n\t\t\t\Search Employee");
int tempid,flag,siz,i;
Employee e;
char another='y';

siz=sizeof(e);

while(another=='y'||another=='Y')
{
printf("\n\n\tEnter ID Number of Employee to search the record : ");
scanf("%d",&tempid);

rewind(fp);

while((fread(&e,siz,1,fp))==1)
{
    if(e.id==tempid)
        {flag=1;
        break;
        }
}

if(flag==1)
    {
    printf("\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tBRANCH : %s",e.branch);
        printf("\n\n\t\tSALARY: %.2f",e.sal);
        printf("\n\n\t\tPRESENT ADDRESS : %s",e.psaddr);
        printf("\n\n\t\tPERMANANT ADDRESS : %s",e.prtaddr);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s",e.mail);

        printChar('=',65);

}
else printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND !!!!");


printf("\n\n\t\tWant to enter another search (Y/N)");
fflush(stdin);
another=getchar();
}
}
