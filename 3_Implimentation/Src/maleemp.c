void maleemp(FILE * fp)
{
    printHead();
    printf("\n\t\t\t\List of Male Employee");
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);//

    while((fread(&e,siz,1,fp))==1)
    {
        if((strcmp(e.gender,"Male")==0)||(strcmp(e.gender,"male")==0))
        {
//
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printChar('-',65);
        }
    }
    printf("\n\n\n\t");
     printChar('*',65);
    printf("\n\n\t");
    system("pause");
}

