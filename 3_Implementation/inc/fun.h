/**
 * @file fun.h
 * @author AMrutha Varshini
 * @brief Header File for CryptoWhat
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief Enum description for error messages
 * 
 */
typedef enum error_msg{
    CORRECT_ANSWER=1,
    WRONG_ANSWER=0,
    INVALID_INPUT=-1
}error_msg;

void intro();

void caesar_intro();

error_msg caesar_calc(char* in,int* key, char* outpu,char* ciphert);

