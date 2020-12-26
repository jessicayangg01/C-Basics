
#include <stdio.h>
float exponent_calc(float base, int exponent);
int main(){
        float base;
        int exponent;
        do{
            printf("What is the base? (enter 0 to exit program) : ");
            scanf(" %f", &base);
            if (base==0) return 0;
            printf("What is the exponent? :");
            scanf(" %d", &exponent);
            float answer = exponent_calc(base, exponent);
            printf("exponent_calc = %f\n", answer);
        }while (base!=0);
        
        
        return 0;
                        
}
float exponent_calc(float base, int exponent){
    if (exponent == 0){
        return 1;
    }
    else if(exponent == 1){
        return base;
    }
    else if (exponent > 0){
        if (exponent%2==0) {return exponent_calc(base, exponent/2)*exponent_calc(base, exponent/2);}
        else {return exponent_calc(base, exponent/2)*exponent_calc(base, exponent/2)*base;}
    }
    else if (exponent < 0){
        return 1/exponent_calc(base, -exponent);
    }
}


