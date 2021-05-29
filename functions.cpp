//This c++ program generate introduction for the game and has some important functions which are used in the game


#include <iostream>
#include <iomanip>
#include <time.h>
#include <ctime>
#include <string>
#ifdef _WIN32
#include <Windows.h>  //However, program needs to be changed. Change system("clear") to system("cls") and use numbers in Sleep(1000) for 1 sec in windows
#else                 // and sleep(1) for 1 sec in linux
#include <unistd.h> //for windows, change it into <windows.h>
#endif


//Adding header files that are created by the programmer to be included
#include "functions.h"   
#include "barrier.h"


using namespace std;



//A function to convert everything to uppercase from lowercase
// It takes the string as an input and returns that string converted into upper case
string to_upper( string str )
{
    // A loop that runs till the end of the string so that all the string is converted to uppercase
    for ( int i = 0; i < str.length(); i++ )
    {
        char y = str[i];               // to store each character and convert it into upper case
        if ( y >= 'a' && y <= 'z' )     // A condition to check if the character is a lowercase letter or not
        {
            str[i] = ( ( y - 'a') + 65 );   // converting to uppercase using ASCII values and mathematical formula
        }
    }

    // returns the string converted in upper case
    return str;
} 



// This function gives a typewriter effect to the output of the game
//It uses sleep function to give out the cout output with delay!
// It takes the string on which this effect is needed  and the time which tells the speed of typewriting effect
void typewriter( string str, int time )
{
    // This loops takes every character from the string and inputs it on the screen with time delay given as parameter of the function
    for ( int i = 0; str[i] != '\0'; i++ )
    {
        cout << str[i];
        cout.flush();
	usleep( time );
    }

}



// Creating a function which will print a specific set of characters on the screen for certain times
// For example if character entered is '*' and number of times to be printed is 80 the output will look like
// ********************************************************************************
void print_line_pattern( char character_to_print, int times )
{
    for ( int i = 0; i < times; i++ )
    {
        cout << character_to_print;
    }

    cout << endl;

}



//This Function creates an introductory diamond logo of the screen
// Sleep function is used to allow a slowmo creation of diamond
// The function returns nothing
// input arguments are the character, the rows and columns
void diamond( char diamondCharacter, int m, int r)
{
    // The first for loop prints the upper part of the diamond
    // and it adds the name of the game at the middle of the diamond
    // Diamond is printed in a row by row manner
    for ( int i = 0; i < r;  i++ )
    {
        if ( i != r - 1 )
        {
            if ( i == 0 )
            {
                cout << setw( m - (3 * i ) + 1) << diamondCharacter;
                cout << endl;
                sleep(0.5);   // To guve a time delay effect
            }
            else
            {
                cout << setw( m - (3 * i )) << diamondCharacter << setw( ( 6 * i ) + 2 ) << diamondCharacter;
                cout << endl;
                sleep( 0.5 );
            }
        }
        else 
        {
            cout << setw( m - ( 3 * i )) << diamondCharacter << setw( ( 6 * i ) + 1 ) << " P.L.A.Y_A.N.D_L.E.A.R.N " << diamondCharacter;;
            cout << endl;
            sleep( 0.5 );            
        }
    }
    
    // This part prints the rest of the diamond .i.e. the remaining lower part
    for ( int i = r - 2 ; i >= 0;  i-- )
    {
            if ( i == 0 )
            {
                cout << setw( m - (3 * i  ) + 1) << diamondCharacter;
                cout << endl;
                sleep( 0.5 );
            }
            else
            {
                cout << setw( m - ( 3 * i )) << diamondCharacter << setw( ( 6 * i ) + 2 ) << diamondCharacter;
                cout << endl;
                sleep( 0.5 );
            }
    }

}



// This function contains the main introduction of the game! It prints the introduction and instructions
//It returnss name of the player
string introduction()
{
    // Various string variables are used to store the text inorder to give a typewriter effect when they are printed on console
    string player_name;   
    string greetings  = "Greetings ";
    string line_1 = "Let's see how the game works!\n";
    string description_1 = "Our game focuses on 3 concepts of Chemistry. It is a supplement to text-books and revision guides!\n";
    string description_2 = "The game will consist of 3 rounds!\nEach round is related to a specific topic of Chemistry!\n";
    string description_3 = "Each round is then further divided into 3 difficulty levels :\n--> Easy\n--> Medium\n--> Hard\n";
    string description_4 = "You will answer chemistry related mcqs and short Q/A at each level.\nAt the start of the game, you will be provided with 50 health points.\n";
    string description_5 = "With every correct answer, your SCORE will increase by 1.\nHowever, with an incorrect answer, your HEALTH POINTS will decrease by 2!\n";
    string description_6 = "The game ends when your health points reach to 0.\n BUT there is a HEALING MECHANISM! You can heal (regain 10 health points) ";
    string description_7 = "yourself for certain times.\nThe amount of times you can heal is determined at the start where you mention the maximum number of times you want to heal (from 3-8 times).\n"; 
    string description_8 = "However, the catch is that the healing procedure depends on your guess between 1-6.\nIf your guess matches with the ";
    string description_9 = "number resulted from rolling of the dice, you will gain 10 health points. THIS IS KNOWN AS THE LUCKY-DICE EFFECT.!\nThe game gets even exciting! The first two times ";
    string description_10 = "if your guess is wrong, no health points will be deducted.\nHowever, afterwards, your health points will be deducted for every wrong guess!";
    string description_11 = " \nThe amount of health points deducted depends on your choice of number of rolls.\n";
    string description_12 = "The deduction in health is equal to (choice of rolls*1).\n I.e. if your initial choice of rolls was 3, 3 health points are deducted upon wrong guess.\nSo use healing CAREFULLY!\nAt the end of each topic/level, you can quit the game by pressing 'q' or move on another ";
    string description_13 = "topic/level by pressing 'ENTER'.\nAt the end of each topic, your score will be shown.At the end of the game or when you quit, your final report card will be displayed.\n";
    string description_14 = "Lastly, you will be asked to answer the questions in two ways!\n1- By typing in the mcq letter.\n2- By typing in the answer which won't have any options.\n";
    string description_15 = "If you enter unexpected values, the game might behave in unexpected ways :(. So BE CAUTIOUS!!! \nIf game crashes, you can restart the program.\n";

    // printing the logo on the console
    system("clear"); // clear screen command for linux
    print_line_pattern( '=', 80 );   // Prints the pattern of =
    sleep( 1 );   //gives a delay
    diamond( '*', 40, 5 );   // prints the diamomnd
    sleep( 1 );
    print_line_pattern( '=', 80 );
    sleep( 2 );
    system("clear");  // It clears the screen in linux for windows use system("cls")

    // asking the name of the user
    string asking_player_name = "What should we call you?\n";
    typewriter( asking_player_name, 75000 );
    getline( cin, player_name );

    // starting the introduction
    typewriter( greetings, 75000 );
    typewriter ( player_name, 75000 );
    sleep( 1 );
    cout <<"!\n";
    sleep( 1 );
    print_line_pattern( '_', 80 );
    sleep( 1 );

   
	
    //This option basically asks for an user input to determine whether he/she wants to watch the introduction.
    string option; 
    cout << "Do you want to know how the game works, by reading the introduction? Or do you want to skip it? Press Y to read or N to skip.\n";		
    cin>> option;
    
	
    // This loop checks whether the input is valid. If the user enters anything other than Y/N/y/n the loop will keep on going.	
    while ( option != "y" && option != "Y" && option != "N" && option != "n" )
    {
	    cout << "Invalid answer! Please enter (Y/N)\n";
	    cin.ignore(); // It clears the input string.
	    cin >> option;	    
    }
   	
   if (option == "Y" || option == "y")  // If the user input is Y/y, he/she will view the introduction. Otherwise, the introduction will be skipped. In this case, intro is not skipped.
   { 	
    typewriter( line_1, 75000 );
    print_line_pattern( '_', 80 );
    sleep( 1 );
    typewriter( description_1, 75000 );
    typewriter( description_2, 75000 );
    typewriter( description_3, 75000 );
    typewriter( description_4, 75000  );
    typewriter( description_5, 75000  );
    typewriter( description_6, 75000  );
    typewriter( description_7, 75000  );
    typewriter( description_8, 75000  );
    typewriter( description_9, 75000  );
    typewriter( description_10, 75000  );
    typewriter( description_11, 75000  );
    typewriter( description_12, 75000  );
    typewriter( description_13, 75000  );
    typewriter( description_14, 75000  );
    typewriter( description_15, 75000  );
    print_line_pattern( '_', 80 );
    sleep( 1 );
   }
    barrier();   // clearing the screen after the introduction

    // returns the player_name
    return player_name;
    
}

