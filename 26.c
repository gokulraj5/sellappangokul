#include <stdio.h>
int main()
{
    char    str[1000];
    int cD,ca,cSC,cs;
    int counter;
    cD=ca=cSC=cs=0;
    printf("Enter a string: ");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='0' && str[counter]<='9')
            cD++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            ca++;
        else if(str[counter]==' ')
            cs++;
        else
            cSC++;
    }
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",cD,ca,cs,cSC);
    return 0;
}
