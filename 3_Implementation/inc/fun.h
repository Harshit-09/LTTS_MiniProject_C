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

/**
 * @brief typedef definition for a string of 100 characters
 * 
 */
typedef char s;

void caesar_intro();

error_msg caesar_calc(s* in,int* key, s* outpu,s* ciphert);