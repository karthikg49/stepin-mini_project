#include "inc/dairy.h"
#include "inc/record.h"
int main()

{

    int ch;

    printf("\n\n\t***********************************\n");

    printf("\t\t*PERSONAL DIARY*\n");

    printf("\t***********************************");

    while(1)

    {

        printf("\n\n\t\tMAIN MENU:");

        printf("\n\n\tADD RECORD\t[1]");

        printf("\n\tVIEW RECORD\t[2]");

        printf("\n\tSEARCH RECORD\t[3]");

        printf("\n\tEXIT\t\t[4]");

        printf("\n\n\tENTER YOUR CHOICE:");

        scanf("%d",&ch);

        switch(ch)

        {

        case 1:

            addrecord();

            break;

        case 2:

            viewrecord();

            break;
        
        case 3:

            searchrecord();

            break;


        case 4:

            printf("\n\n\t\tTHANK YOU FOR USING THE APPLICATION ");

            exit(0);

            break;

        default:

            printf("\nYOU ENTERED WRONG CHOICE..");

            printf("\nPRESS ANY KEY TO TRY AGAIN");

            break;

        }

    }

    return 0;

}

void addrecord( ){
    char choice;
    printf("\n\n\t\t***************************\n");

    printf("\t\t* WELCOME TO THE ADD MENU *");

    printf("\n\t\t***************************\n\n");

    printf("\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:");

    scanf("%10s",r[n].date);

    printf ( "\n\tENTER TIME:[hh:mm]:");

    scanf("%5s",r[n].time);

    printf("\n\tENTER NAME:");

    scanf("%20s",r[n].name);

    printf("\n\tENTER PLACE:");

    scanf("%20s",r[n].place);

    printf("\n\tENTER DURATION:");

    scanf("%20s",r[n].duration);

    printf("\n\tNOTE:");

    scanf("%20s",r[n].note);

    printf("\n\nYOUR RECORD IS ADDED...\n");
    n++;

}

void viewrecord( ){

    printf("\n\n\t\t***************************\n");

    printf("\t\t* WELCOME TO THE VIEW MENU *");

    printf("\n\t\t***************************\n\n");

int i;
    for(i=0;i<n;i++){

        printf("\n********************");
        printf("\nRECORD %d :\n",(i+1));

        printf("\nDATE: %s",r[i].date);

        printf("\nTIME: %s",r[i].time);

        printf("\nMEETING WITH: %s",r[i].name);

        printf("\nMEETING AT: %s",r[i].place);

        printf("\nDURATION: %s",r[i].duration);

        printf("\nNOTE: %s",r[i].note);

        printf("\n");

        printf("\n********************");

    }
    printf("\nTHERE ARE %d RECORD IN YOUR DAIRY",n);
}

void searchrecord( ){

    char da[10];
    printf("\n\n\t\t***************************\n");

    printf("\t\t* WELCOME TO THE SEARCH MENU *");

    printf("\n\t\t***************************\n\n");

    printf("\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:");
    
    scanf("%s",da);

int i;
    for(i=0;i<n;i++){

        if(strcmp(da,r[i].date)==0){

        printf("\n********************");
        printf("\nRECORD %d :\n",(i+1));

        printf("\nDATE: %s",r[i].date);

        printf("\nTIME: %s",r[i].time);

        printf("\nMEETING WITH: %s",r[i].name);

        printf("\nMEETING AT: %s",r[i].place);

        printf("\nDURATION: %s",r[i].duration);

        printf("\nNOTE: %s",r[i].note);

        printf("\n");

        printf("\n********************");
        }

    }
}






