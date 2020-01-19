#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
#include <mcheck.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    (void) ht;
    return (EXIT_SUCCESS);
}
