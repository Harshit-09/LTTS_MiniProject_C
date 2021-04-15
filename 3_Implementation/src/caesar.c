/**
 * @file caesar.c
 * @author Amrutha Varshini
 * @brief Leanr and Practice Ceasat Cipher
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "fun.h"
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * @brief Introduction to Caesar Cipher
 * 
 */
void caesar_intro(){
    printf("\nWelcome to Caesar\n"); 

    //Practice Question 1
    s plainText[100],userInput[100],cipherText[100];
    int key;
    strcpy(plainText,"cdeff");
    printf("The Plain text is %s\n",plainText);
    key = -2 ;
    strcpy(cipherText," ");
    printf("The key is %d\n",key);
    printf("Perform Caesar Cipher Encryption and enter your answer \n");
    scanf("%s",&userInput);
   
   printf("Your input is %s\n",userInput);
    error_msg result = caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]);

    if(result == 1) printf("\n Good Job!\n");
    else printf("UhOh! Wrong Answer. the correct answer is %s",cipherText);
    
}

/**
 * @brief To verify User Input
 * 
 * @param plainT Plain Text 
 * @param key Key
 * @param userIn user Input
 * @param cipherT Cipher Text
 * @return error_msg Return if answer is correct or not
 */
error_msg caesar_calc(s* plainT, int* key, s* userIn,s* cipherT){
 
   s* checkC ;
   checkC=cipherT;
    int check=0;
    int i=0;
    while(isalpha(*plainT))
    {    if (isupper(*plainT))
                *cipherT= (char)((int)(*plainT)+*key-65)%26 +65;
    
            else 
                *cipherT = (char)((int)(*plainT)+*key-97)%26 +97;
        printf("\n%c  ",*plainT);
            printf("  %c\n",*cipherT);
        plainT+=sizeof(char)  ;
        cipherT+=sizeof(char);
         if(!(isalpha(*plainT))) 
            *cipherT='\0';
    }


    while(isalpha(*userIn)){
        if((int)(*checkC)!=(int)(*userIn)) 
        { check=1; 
           break;
        }
              printf("\n%c  ",*userIn);
            printf("  %c\n",*checkC);
        userIn+=sizeof(char);
         checkC+=sizeof(char)  ;
 
    }
   
        if(check==1)
            return WRONG_ANSWER;
        else return CORRECT_ANSWER;
}