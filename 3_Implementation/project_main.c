/**
 * @file project_main.c
 * @author Amrutha Varshini
 * @brief CryptoWhat Home page
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<Stdio.h>

int main(){
    int choice;
    printf("Welcome to CryptoWhat?\nYour kickstart into the Cryptography Journey\n");
    printf("Enter a Number between 1-6 to begin your journey\nSuggestion: If you are a newbie, Head to Introduction first\n");
    printf("1. Introduction\n2. Caesar Cipher\n3.Monoalphabetic Cipher\n4. Playfair Cipher\n5. Hill Cipher\n6. Polyalphabetic Cipher ");
    scanf("%d ",&choice);

    // Following output messages are only to test user input
    switch(choice){
        case 1: printf("Hurray! Introduction"); 
                break;
        case 2: printf("Hurray! Caesar"); 
                break;
        case 3: printf("Hurray! Mono"); 
                break;
        case 4: printf("Hurray! Playfairf"); 
                break;
        case 5: printf("Hurray! HIll"); 
                break;     
        case 6: printf("Hurray! polyy"); 
                break;
        default: printf("Try again please"); 
                break;         
    }
}