#include<stdio.h>
#include<stdlib.h>

int main(int argv, char **argc){


// Made by : Murtaza Tanveer
//Reg No   : SP23-BSE-096-2C
// Date         10/22/2023


printf("\nMade by : MURTAZA TANVEER\nReg no  : SP23-BSE-096-2C");
printf("\n\n____________________WELCOME TO MOBILE DATA USAGE TRACKER___________________\n\n\n");

float amount = atof(argc[1]);

float month_add = atof(argc[2]);

float year_per = atof(argc[3]);

float year_inf = atof(argc[4]);

float years = atof(argc[5]);


float = (1 + year_per)/(1 + year_inf) - 1;

float err =  month_add * (years*12);

if(err > 18500){

    printf("\n\nExceeding maximum annual contribution limit of $18,500.\n")
}

else{

    
}

}
