void welcome()
{
    printf("\n\n\n\n\n\t\t[ [ [ WELCOME TO OUR EMPLOYEE MANAGEMENT SYSTEM ] ] ]\n\n\n\n\n\n\n\t");
    system("pause");
}


//----printing character ch at n times ------

void printChar(char ch,int n)
{
    while(n--)
    {
        putchar(ch);
    }
}

//-----Printing Head Line of the program -----

void printHead()
{ system("cls");
printf("\t");
printChar('=',65);
printf("\n\t");
printChar('=',16);
printf("[EMPLOYEE] [MANAGEMENT] [SYSTEM]");
printChar('=',16);
printf("\n\t");
printChar('=',65);
