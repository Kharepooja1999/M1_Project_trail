void femaleemp(FILE * fp)
{
    printHead();
     printf("\n\t\t\t\List of Female Employee");
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)
    {
        if((strcmp(e.gender,"Female")==0)||(strcmp(e.gender,"female")==0))
        {
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printChar('-',65);//
        }
    }
    printf("\n\n\n\t");
     printChar('*',65);
    printf("\n\n\t");
    system("pause");
}
