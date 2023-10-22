#include<stdio.h>
#include<stdlib.h>

int main(int argv, char **argc){


// Made by : Murtaza Tanveer
//Reg No   : SP23-BSE-096-2C
// Date         10/22/2023


printf("\nMade by : MURTAZA TANVEER\nReg no  : SP23-BSE-096-2C");

printf("\n\n____________________WELCOME TO 401(K) PLAN___________________\n\n\n");

float amount = atof(argc[1]);

float month_add = atof(argc[2]);

float year_per = atof(argc[3]);

float year_inf = atof(argc[4]);

float years = atof(argc[5]);


float month_avg = (1 + year_per)/(1 + year_inf) - 1;

float months = years*12;

float err =  month_add * months;



/*if(err > 18500){

    printf("\n\nExceeding maximum annual contribution limit of $18,500.\n");
}*/

//else{

double interest;
double sum_interest=0;


for ( int i = 1; i<=months ; i++){


interest = (month_avg * amount) / 12;

sum_interest = sum_interest + interest;

amount = amount + (month_add + interest);

printf("Month : %d \t Interest per month : $ %.2lf \t Amount per month : $ %.2lf \n\n",i,interest,amount);



}

printf("\n\n___________________FINAL AMOUNTS__________________\n\n");

printf("\nTotal Amount of Interest : $ %.2lf\n\n",sum_interest);

printf("\n\nTotal Amount of %.1f Years is  $ %.2lf\n",years,amount);


//}

}
