/**
 * @file test_crypto.c
 * @author Amrutha Varshini
 * @brief Unit testing for the Cryptowhat program
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity_internals.h"
#include "unity.h"
#include "fun.h"
#include<string.h>

char userInput[100], plainText[100], cipherText[100];
int key;


//setUp and tearDown required for Unity
void setUp(void){}

void tearDown(void){}

/**
 * @brief Testing when User Input is fine and checking Ceasar Calculations
 * 
 */
void test_caesar(){
    //key is positive - encryption
    strcpy(plainText,"test");
    strcpy(userInput,"uftu");
    strcpy(cipherText,"0");
    key=1;

    TEST_ASSERT_EQUAL(CORRECT_ANSWER,caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]));

    strcpy(plainText,"test");
    strcpy(userInput,"thgy");
    strcpy(cipherText,"0");
    key=1;

    TEST_ASSERT_EQUAL(WRONG_ANSWER,caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]));

    strcpy(plainText,"test");
    strcpy(userInput,"uftuuth");
    strcpy(cipherText,"0");
    key=1;

    TEST_ASSERT_EQUAL(WRONG_ANSWER,caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]));

    strcpy(plainText,"test");
    strcpy(userInput,"v1h2");
    strcpy(cipherText,"0");
    key=1;

    TEST_ASSERT_EQUAL(INVALID_INPUT,caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]));

    //for decryption
    key=26-key;

    strcpy(plainText,"uftu");
    strcpy(userInput,"test");
    strcpy(cipherText,"0");
    

    TEST_ASSERT_EQUAL(CORRECT_ANSWER,caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]));

    strcpy(plainText,"uftu");
    strcpy(userInput,"thgy");
    strcpy(cipherText,"0");


    TEST_ASSERT_EQUAL(WRONG_ANSWER,caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]));

    strcpy(plainText,"uftu");
    strcpy(userInput,"testgh");
    strcpy(cipherText,"0");


    TEST_ASSERT_EQUAL(WRONG_ANSWER,caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]));

    strcpy(plainText,"uftu");
    strcpy(userInput,"v1h2");
    strcpy(cipherText,"0");
 

    TEST_ASSERT_EQUAL(INVALID_INPUT,caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]));


}


int main(void){
    UNITY_BEGIN();

    RUN_TEST(test_caesar);


    return UNITY_END();
}