#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

/**
 *  * string_toupper - capitalize all letters in string
 *   * @s: string to manipulate
 *    * Return: string with all letters capitalized
 *     */

char *string_toupper(char *);

/**
 *  * string_toupper - capitalize first letter of all words
 *   * @s: string to manipulate
 *    * Return: string
 *     */

char *cap_string(char *s);

/**
 *  * rot13 - encode string using rot13
 *   * @s: string to encode
 *    * Return: encoded string
 *     */

char *rot13(char *s);

/**
 *  * leet - encode string into 1337 leet
 *   * @s: string to manipulate
 *    * Return: string
 *     */

char *leet(char *s);

/**
 *  * print_number - print an integer, without using long, arrays, or pointers
 *   * @n: number to be printed
 *    */

void print_number(int n);

#endif
