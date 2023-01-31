#include<stdio.h>
#include<stdlib.h>
void main (void){
    int code;
    int quantity;
    float price;
    float amount;
    char AddAnother;
    float TotalAMT,cashT,change;

    do{
        system("cls");
printf("\n\n\n");

printf("====================== \n");
printf("Olande Hotel Services \n");
printf("====================== \n");

printf("=====================\n");
printf(" AVAILABLE FOOD MENU:   \n ");
printf("=====================\n");
printf("Food\t\t\t Price\n");
printf("[1] Ugali\t\t KSH7.00 \n");
printf("[2] Rice\t\t KSH12.00 \n");
printf("[3] Beans\t\t KSH15.00 \n");
printf("[4] Fish\t\t KSH30.00 \n");
printf("[5] Cakes\t\t KSH45.00 \n");

printf("Please input the code yo want to order: \n");
scanf("%d", &code);
printf("Please input the quantity you want to order: \n");
scanf("%d", &quantity);



switch(code){
    case 1: price = 7.00;
    break;

    case 2: price =  12.00;
    break;

    case 3: price = 15.00;
    break;

    case 4: price = 30.00;
    break;

    case 5: price = 45.00;
    break;
}

amount = quantity * price;

printf("\nAmount: %.2f\n", amount);

TotalAMT = TotalAMT + amount;
printf("Total Amount\t\t: %.2f \n", TotalAMT);
printf("\n Do you want to order another food(y/n)?");

AddAnother = getche();
} while(AddAnother == 'y' || AddAnother == 'Y');

do{
printf("\ncash tendered\t\t: ", &cashT);
scanf("%f", &cashT);}
while ( cashT < TotalAMT);{
}

change = cashT - TotalAMT;

printf("Balance\t\t : %.2f", change);





return 0;
}
