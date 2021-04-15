/**
 * @file main.c
 * @author Amrutha Varshini
 * @brief Home page for Cryptowhat
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "fun.h"
#include<ctype.h>

int main(){
    char choice;
    printf("Welcome to CryptoWhat?\nYour kickstart into the Cryptography Journey\n");
    while(1){

    printf("\n\nEnter a Number between 1-6 to continue your journey\nSuggestion: If you are a newbie, Head to Introduction first\n");
    printf("1. Introduction\n2. Caesar Cipher\n3.Monoalphabetic Cipher\n4. Playfair Cipher\n5. Hill Cipher\n6. Polyalphabetic Cipher\n7. Exit the program ");
    scanf("\n%c",&choice);
    
    switch(choice){
        case '1': intro();
                break;
        case '2': caesar_intro();
                break;
        case '3': printf("\n\nCheck back again Later for this module"); 
                break;
        case '4': printf("\n\nCheck back again Later for this module"); 
                break;
        case '5': printf("\n\nCheck back again Later for this module"); 
                break;     
        case '6': printf("\n\nCheck back again Later for this module"); 
                break;
        case '7': break;
        default: printf("\n\nInvalid Input. Try Again"); 
                break;         
    }
    if(choice=='7') break;
    }
}