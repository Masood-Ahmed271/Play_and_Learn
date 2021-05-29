#include <iostream>
#include <string>
#include <cstdlib>  //for calling srand and rand functions
#include <ctime>    // for calling ctime

#include "barrier.h"
#include "functions.h"

using namespace std;

// A function declaration allowing the use of typewriter when needed
void typewriter( string str, int time );


//It returns true when a person wants to use healing chance
bool healer()
{
    char s;   // Take user input
    cout << endl;
    string line = "Do you want to heal? (Y/N)\n";  //asking the user for input
    typewriter( line, 5000 );
    cin >> s;

    // Checking if the key entered is right or not
    while ( s != 'y' && s != 'Y' && s != 'n' && s != 'N' )
    {
        cout << "Invalid answer! Please enter Y or N.\n";
        typewriter( line, 5000 );
        cin.ignore();  //clearing the input stream
        cin >> s;
    }

    // This means healing not needed
    if ( s == 'N' || s == 'n' )
    {
        return false;
    }
    
    // This means healing needed
    return true;


}



//This function will return true or false according to the guess and will allow healing or not
// If guess matches with the number generated to be guessed, it returns true
bool random_guess()
{
    srand( time( NULL ) );   // initialising the seed
    string guess2;
    int guessGenerator = ( rand() % 6 )+ 1;   // generating a random number
    cout << endl;
    string line = "Guess a number between 1 to 6\n";
    typewriter( line, 5000 );

    cin >> guess2;
    
    while (guess2!="1" && guess2 !="2" && guess2!="3" && guess2 !="4" && guess2!="5" && guess2 !="6")
    {     
        cout<< "Invalid input! The number entered should be between 1 to 6.\n";
        cin >> guess2;
    }

    int guess= stoi(guess2);
    cout << "Your guess is " << guess << endl << "The Number to be guessed is " << guessGenerator << endl;
    
    // Checking if guess is correct or not and the return accordingly
    if ( guess == guessGenerator )
    {
        return true;
    }
    
    return false;

    
}
