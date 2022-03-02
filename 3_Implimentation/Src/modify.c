void modify(FILE * fp)
{
printHead();
printf("\n\t\t\t\Modify Employee");
Employee e;
int i,flag=0,tempid,siz=sizeof(e);
float sal;

printf("\n\n\tEnter ID Number of Employee to Modify the Record : ");
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
    fseek(fp,-siz,SEEK_CUR);
    printf("\n\n\t\tRecord Found");
    printf("\n\n\t\tEnter New Data for the Record");

     printf("\n\n\t\tEnter ID number: ");
    scanf("%d",&e.id);

    printf("\n\n\t\tEnter Full Name of Employee: ");
    fflush(stdin);
    fgets(e.name,100,stdin); //fgets takes an extra \n character as input
    e.name[strlen(e.name)-1]='\0';


    printf("\n\n\t\tEnter Designation: ");
    fflush(stdin);
    fgets(e.desgn,10,stdin); //fgets takes an extra \n character as input
    e.desgn[strlen(e.desgn)-1]='\0';


    printf("\n\n\t\tEnter Gender: ");
    fflush(stdin);
    fgets(e.gender,10,stdin); //fgets takes an extra \n character as input
    e.gender[strlen(e.gender)-1]='\0';

    printf("\n\n\t\tEnter Branch: ");
    fflush(stdin);
    fgets(e.branch,50,stdin);
    e.branch[strlen(e.branch)-1]='\0';


    printf("\n\n\t\tEnter Salary: ");
    scanf("%f",&e.sal);

    printf("\n\n\t\tEnter Present Address: ");
    fflush(stdin);
    fgets(e.psaddr,200,stdin);
    e.psaddr[strlen(e.psaddr)-1]='\0';

    printf("\n\n\t\tEnter Permanant Address: ");
    fflush(stdin);
    fgets(e.prtaddr,200,stdin);
    e.prtaddr[strlen(e.prtaddr)-1]='\0';

    printf("\n\n\t\tEnter Phone: ");
    fflush(stdin);
    fgets(e.phone,50,stdin);
    e.phone[strlen(e.phone)-1]='\0';

    printf("\n\n\t\tEnter E-mail: ");
    fflush(stdin);
    fgets(e.mail,20,stdin);
    e.mail[strlen(e.mail)-1]='\0';

    fwrite(&e,sizeof(e),1,fp);
}

else printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");

printf("\n\n\t");
system("pause");

}

