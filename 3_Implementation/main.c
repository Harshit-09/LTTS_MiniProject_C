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

int main(){
    int choice;
    printf("Welcome to CryptoWhat?\nYour kickstart into the Cryptography Journey\n");
    printf("Enter a Number between 1-6 to begin your journey\nSuggestion: If you are a newbie, Head to Introduction first\n");
    printf("1. Introduction\n2. Caesar Cipher\n3.Monoalphabetic Cipher\n4. Playfair Cipher\n5. Hill Cipher\n6. Polyalphabetic Cipher ");
    scanf("\n%d",&choice);
   // printf("\n%d\n",choice);
    // Following output messages are only to test user input
    switch(choice){
        case 1: printf("\n\nCheck back again Later for this module"); 
                break;
        case 2: caesar_intro();
                break;
        case 3: printf("\n\nCheck back again Later for this module"); 
                break;
        case 4: printf("\n\nCheck back again Later for this module"); 
                break;
        case 5: printf("\n\nCheck back again Later for this module"); 
                break;     
        case 6: printf("\n\nCheck back again Later for this module"); 
                break;
        default: printf("\n\nCheck back again Later for this module"); 
                break;         
    }
}