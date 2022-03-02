void frmhyd(FILE * fp)
{
    printHead();
     printf("\n\t\t\t\List of Employee From hyd");//
    Employee e;
    int i,siz=sizeof(e);

    rewind(fp);

    while((fread(&e,siz,1,fp))==1)
    {
        if((strstr(e.prtaddr,"hyd")==0)||(strstr(e.prtaddr,"hyd")==0)||(strstr(e.prtaddr,"HYD")==0))
        {
        printf("\n\n\t\tID : %d",e.id);
        printf("\n\n\t\tNAME : %s",e.name);
        printf("\n\n\t\tDESIGNATION : %s",e.desgn);
        printf("\n\n\t\tPHONE : %s",e.phone);
        printf("\n\n\t\tE-MAIL : %s",e.mail);
        printChar('=',65);
        }
    }//
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}
