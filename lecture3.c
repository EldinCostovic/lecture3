
#include <stdio.h>
int main (void){
    int numbers[7] = {38, 27, 2, 43, 9 , 82 , 10};
    int f[7];
    int pom,i;

    for(i = 0 ; i < 6 ; i ++){
        if(numbers[i] > numbers[i+1]){
            pom = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i+1] = pom;
        }
    
        i++;
    }
    printf("all merged:");
    for ( i = 0; i < 7; i++)
    {
        printf("%i " , numbers[i]);
    }
    printf("\n");
    
    //sorted 1-4
    int j = 2,k=0;
    for (i = 0; i < 2; i++){
        if(numbers[i] > numbers[j] ){
            f[k] = numbers [j];
            f[k+1] = numbers [i];
        }

        else{
            f[k] = numbers[i];
            f[k+1] = numbers[j];
        }
        j++;
        k += 2;
    }

    if(f[1] > f[2]){
        pom = f[1];
        f[1] = f[2];
        f[2] = pom;
    }

    printf("(1-4):     ");
    for ( i = 0; i < 4; i++)
    {
        printf("%i " , f[i]);
    }
    printf("\n");

    //merge 4.5.6
    for (i = 4; i < 6; i++)
    {
        if(numbers[i] > numbers[6]){
            f[i] = numbers[6];
            f[i+1] = numbers[i];
        }
        else{
            f[i] = numbers[i];
            f[i+1] = numbers[6];
        }
    }
    printf("(5-7):     ");
    for ( i = 4; i < 7; i++)
    {
        printf("%i " , f[i]);
    }
    printf("\n");

    //finale
    j = 4;
    k=0;
    
    int sorted[7];
    for (i = 0; j < 6; i++)
    {
        if(f[i] > f[j]){
            sorted[k] = f[j];
            sorted[k+1] = f[i];
        }
        else{
            sorted[k+1] = f[j];
            sorted[k] = f[i];
        }
        k = k + 2; 
        j++;
    }

    j = 6;
    k = 4;
    for(i = 2; i < 4; i++)
    {
        if(f[i] > f[j]){
            pom = f[i];
            f[i] = f[j];
            f[i] = pom;
        }
        sorted[k] = f[i];
        k++;
    }

    sorted[6] = f[j];

    for ( i = 0; i < 7; i++)
    {
        printf("%i " , sorted[i]);
    }
}

