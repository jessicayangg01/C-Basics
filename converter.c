
#include <stdio.h>
int main(){
        char option;
        char choice2;
        float number;
        do{
                printf("Please enter your prefered conversion option: \n1 for conversion between Kilometer and mile\n2 for conversion between Litre and Gallon \n3 for conversion between Centimetre and Inch \n4 for conversion between Celsius and Fahrenheit\n5 to quit\n");
                scanf(" %c", &option);
                switch (option){
                        case '1':
                                do{
                                    printf("Enter K for conversion from Kilometer to Mile \nEnter M for conversion from Mile to Kilometer\n");
                                    scanf(" %c", &choice2);
                                    if (choice2 == 'K'){
                                        printf("Enter a number:");
                                        scanf(" %f", &number);
                                        printf("Answer: %f\n", number*0.621371);
                                    }else if (choice2 == 'M'){
                                        printf("Enter a number:");
                                        scanf(" %f", &number);
                                        printf("Answer: %f\n", number*1.60934);
                                    }
                                }while (choice2!='K' && choice2!='M');
                                break;
                        case '2':
                                do{
                                    printf("Enter L for conversion from Litre to Gallon\nEnter G for conversion from Gallon to Litre\n");
                                    scanf(" %c", &choice2);
                                    if (choice2 == 'L'){
                                        printf("Enter a number:");
                                        scanf(" %f", &number);
                                        printf("Answer: %f\n", number*0.219969);
                                    }else if (choice2 == 'G'){
                                        printf("Enter a number:");
                                        scanf(" %f", &number);
                                        printf("Answer: %f\n", number*4.54609);
                                    }
                                }while (choice2!='L' && choice2!='G');
                                break;
                        case '3':
                                do{
                                    printf("Enter C for conversion from Centimetre to Inch\nEnter I for conversion from Inch to Centimetre\n");
                                    scanf(" %c", &choice2);
                                    if (choice2 == 'C'){
                                        printf("Enter a number:");
                                        scanf(" %f", &number);
                                        printf("Answer: %f\n", number*0.393701);
                                    }else if (choice2 == 'I'){
                                        printf("Enter a number:");
                                        scanf(" %f", &number);
                                        printf("Answer: %f\n", number*2.54);
                                    }
                                }while (choice2!='C' && choice2!='I');
                                break;
                        case '4':
                                do{
                                    printf("Enter C for conversion from Celsius to Fahrenheit\nEnter F for conversion from Fahrenheit to Celsius\n");
                                    scanf(" %c", &choice2);
                                    if (choice2 == 'C'){
                                        printf("Enter a number:");
                                        scanf(" %f", &number);
                                        printf("Answer: %f\n", number*3.5+32);
                                    }else if (choice2 == 'F'){
                                        printf("Enter a number:");
                                        scanf(" %f", &number);
                                        printf("Answer: %f\n", (number-32)/3.5);
                                    }
                                }while (choice2!='C' && choice2!='F');
                                break;
                        case '5': 
                            return 0;
                }
        }while(option!='5');
                        
}

