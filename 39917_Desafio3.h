//
// Created by Robson Tavares Júnior on 31/10/18.
//

#include <stdio.h>
#include <math.h>
#include <string.h>

#ifndef DESAFIO3_39917_DESAFIO3_H
#define DESAFIO3_39917_DESAFIO3_H

int v1(){

    char name[900];
    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Hello, %s", name);
}


int v2(){

    char name1[900], name2[900], eldest[900];
    float age1, age2, biggestAge;

    printf("First brother name: ");
    scanf("%s", &name1);

    printf("First brother age: ");
    scanf("%f", &age1);

    printf("Second brother name: ");
    scanf("%s", &name2);

    printf("Second brother age: ");
    scanf("%f", &age2);

    if(age1>age2){
        strcpy(eldest, name1);
        biggestAge = age1;
    }else{
        strcpy(eldest, name2);
        biggestAge = age2;
    }

    printf("Average of the brother's age is: %.2f\n", (age1 + age2)/2);
    printf("The eldest brother, %s, has %.0f years.", eldest, biggestAge);

}

int v3(){

    char name1[900], name2[900], eldest[900];
    float age1, age2, lowestAge;

    printf("First brother name: ");
    scanf("%s", &name1);

    printf("First brother age: ");
    scanf("%f", &age1);

    printf("Second brother name: ");
    scanf("%s", &name2);

    printf("Second brother age: ");
    scanf("%f", &age2);

    if(age1<age2){
        strcpy(eldest, name1);
        lowestAge = age1;
    }else{
        strcpy(eldest, name2);
            lowestAge = age2;
    }

    printf("Average of the brother's age is: %.2f\n", (age1 + age2)/2);
    printf("The youngest brother, %s, has %.0f years.", eldest, lowestAge);

}

int v4(){

    int i, age, biggestAge;
    float meanAge;

    age = -1;

    for(i=0; i<5; i++){

        if(i == 0){
            do{
                printf("Enter the age of the first person: ");
                scanf("%d", &age);
                biggestAge = age;
                meanAge += age;

            }while(age<=0);
        }

        printf("Enter the age of the next person: ");
        scanf("%d", &age);

        if(age >= biggestAge){
            biggestAge = age;
        }

        meanAge += age;


    }

    printf("Average age is: %.2f\n", meanAge/5);
    printf("The biggest age is %.0f years.", biggestAge);

}


int v5(){

    int i, age, biggestAge, numberOfPeople;
    float meanAge;

    age = -1;

    printf("How many people do you want to calculate the average age ? ");
    scanf("%d", &numberOfPeople);

    for(i=0; i<(numberOfPeople-1); i++){

        if(i == 0){
            do{
                printf("Enter the age of the first person: ");
                scanf("%d", &age);
                biggestAge = age;
                meanAge += age;

            }while(age<=0);
        }

        printf("Enter the age of the next person: ");
        scanf("%d", &age);

        if(age >= biggestAge){
            biggestAge = age;
        }

        meanAge += age;


    }

    printf("Average age is: %.2f\n", meanAge/numberOfPeople);
    printf("The biggest age is %.0f years.", biggestAge);

}

int v6(){

    int i, age, biggestAge;
    float meanAge, numberOfPeople=1;
    char stop[900];

    age = -1;
    strcpy(stop, "n");


    while(strcmp(stop, "n") == 0){

        if(numberOfPeople == 1){
            do{
                printf("Enter the age of the first person: ");
                scanf("%d", &age);
                biggestAge = age;
                meanAge += age;

                printf("Wanna stop the calculation ? y for yes, n for no ");
                scanf("%s", &stop);

                if(strcmp(stop, "y") == 0){
                    break;
                }
            }while(age<=0);
        }

        printf("Enter the age of the next person: ");
        scanf("%d", &age);

        if(age > biggestAge){
            biggestAge = age;
        }

        meanAge += age;
        numberOfPeople += 1;

        printf("Wanna stop the calculation ? y for yes, n for no ");
        scanf("%s", &stop);


    }

    printf("Average age is: %.2f\n", meanAge/numberOfPeople);
    printf("The biggest age is %d years.", biggestAge);

}

int v7(){

    float x, fX;

    x = -1;
    do{
        printf("Input x value ");
        scanf("%f", &x);

        if(x <= 0){
            printf("Please input a positive integer\n");
        }else{
            fX = 2*x;
            printf("f(%0.f) = %.0f", x, fX);
        }
    }while(x<=0);
}

int v8(){

    int x, fX;

    printf("f(x) = 2x\n");

    for(x=2; x<=6; x++){
        fX = 2*x;
        printf("f(%d) = %d\n", x, fX);

    }
}

int v9(){

    int x, fX, a, b;


    printf("Please choose a lower bounder: ");
    scanf("%d", &a);

    printf("Please choose a upper bounder: ");
    scanf("%d", &b);

    printf("f(x) = 2x for range [%d, %d]\n", a, b);

    for(x=a; x<=b; x++){
        fX = 2*x;
        printf("f(%d) = %d\n", x, fX);

    }
}

int v10(){

    int x, fX, a, b;


    printf("Please choose a lower bounder: ");
    scanf("%d", &a);

    printf("Please choose a upper bounder: ");
    scanf("%d", &b);

    printf("f(x) for range [%d, %d]\n", a, b);

    for(x=a; x<=b; x++){

        if(x<5){

            fX = 2*x;

        } else if(x == 5){

            fX = x-2;

        }else{

            fX = x/2;

        }

        printf("f(%d) = %d\n", x, fX);

    }
}

int v11(){

    int x, y, fXY, a, b;


    printf("Please choose a lower bounder: ");
    scanf("%d", &a);

    printf("Please choose a upper bounder: ");
    scanf("%d", &b);

    printf("f(x, y) for range x in [%d, %d] and y in [2, 6]\n", a, b);

    for(x=a; x<=b; x++){

        for(y=2; y<=6; y++){

            if(x<5){

                fXY = 2*x*y;

            } else if(x == 5){

                fXY = (x*y)-2;

            }else{

                fXY = (x+y)/2;

            }
            printf("f(%d, %d) = %d\n", x, y, fXY);
        }



    }
}

int v12(){

    int x, y, fXY, a, b, c, d;


    printf("Please choose a x lower bounder: ");
    scanf("%d", &a);

    printf("Please choose a x upper bounder: ");
    scanf("%d", &b);

    printf("Please choose a y lower bounder: ");
    scanf("%d", &c);

    printf("Please choose a y upper bounder: ");
    scanf("%d", &d);

    printf("f(x, y) for range x in [%d, %d] and y in [%d, %d] with 2 as step in y\n", a, b, c, d);

    for(x=a; x<=b; x++){

        for(y=c; y<=d; y+=2){

            if(x<5){

                fXY = 2*x*y;

            } else if(x == 5){

                fXY = (x*y)-2;

            }else{

                fXY = (x+y)/2;

            }
            printf("f(%d, %d) = %d\n", x, y, fXY);
        }



    }
}

#endif //DESAFIO3_39917_DESAFIO3_H
