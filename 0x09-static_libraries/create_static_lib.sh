#!/bin/bash

/**
 * source_0 - Source 0
 * Return: Always 0
 */
int source_0(void)
{
	return (0);
}
gcc -c *.c
ar rc liball.a *.o
ranlib liball.a
