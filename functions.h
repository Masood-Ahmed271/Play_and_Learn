#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>

using namespace std;

// This function returns the player_name and prints introduction on the console
string introduction ();

// This function prints a pattern of lines
void print_line_pattern( char character_to_print, int times );

// This function prints diamond when called
void diamond( char diamondCharacter, int m, int r);

// This function gives a typewriter effect on the text
void typewriter( string str, int time );

#endif




