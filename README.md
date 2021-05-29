# Play_And_Learn

# ENGG1340: Computer Programming II

______________________________________________________________________________________________________________________________________________________________________

## Team Members:-

* Group Number:  182

* Name: Sabyasachi Purkayastha
  UID: 3035729708
  Accounts: Shoh4g

* Name: AHMED Masood
  UID: 3035812127
  Accounts: Masood-Ahmed-20, Masood-Ahmed-271, Ghost
______________________________________________________________________________________________________________________________________________________________________

# Description of the text-based game:-

* The game which we are implementing is an education based text game. The subject is chemisty and the motive of the game is to act as a supplement to text books and revision guides.
* The game/project will consist of 3 levels. The three levels correspond to 3 topics of chemistry. Each level is further divided into 3 difficulty levels: easy, medium, hard. Player starts with a certain health. Each wrong answer results in reduction of his health by a certain amount. If his health decreases below a certain level he loses the game. 
* We will allow a user to heal .i.e. everytime his health is low, the user will be asked whether he wants to roll dice to increase his health. If his guess score matches the number on the dice score his health increases. For the first 2 times, nothing happens if he guesses wrong. later on, wrong guess will decrease his health.  * After every topic finishes, his score is displayed. If the game finishes, a report card will be generated. The report card holds the record of his performance in all topics. His report card will include a percentile and a letter grade.In the end, the user will also get feedback on each topic based on his grade.
* The questions will be answered by the user through two ways. One way is MCQ and other is short Q/A.
______________________________________________________________________________________________________________________________________________________________________

# Compilation and execution instructions

To compile and run the code, enter:

```
make game
./game

```
______________________________________________________________________________________________________________________________________________________________________


# Features which we will implement!

## How are random events implemented in this project?

* After every question, the user will be asked if he wants to heal himself by guessing the value resulted from a roll of dice.
* We will implement a mini-lucky roll the dice within the education game. So to generate random numbers for the dice, we will use rand() function to generate the number. If the guess of the user matches with the generated number, the user will gain energy points. Otherwise, he loses the points.
 

## How do we use data structures?

* We use simple arrays and structs to store answers to questions, scores of the user, and health of the user!
* User status, name, health, scores will also be stored in the data structures.

## Dynamic Memory Management:
* Our game consists of an array that represents how many rolls of dice are available to the user at the start of the game. If three rolls are available, array= [1,1,1]. The size of this array is inputted by the user during game play. Maximum size is 8 while minimum is 3. Therefore, the size of the array is not declared at the start of the game. It is declared upon user input. The catch however is if user chooses greater number of rolls, more of his health decreases upon a wrong guess. So the size of the array is proportional to the decrease in health upon a wrong guess.

## Use Of File input/output:
 * All of the user data will be stored in a file.
 * The answers and the questions are stored in seperate individual files.
 * Some of the game variables would be also written in files to maintain proper records of game choices and other implementation of game features.
 * Final report will also be stored in a file as a history of the user's progress and will displayed at the end of the game

## How Do We Impliment Program code in multiple files?
 * Program code will be stored in multiple files to implement the game functionality without any errors. The major files are playmain.cpp, func2.cpp, function.cpp, and   barrier.cpp
 * These files control individual aspects of the game. playmain.cpp is the file where the main game flow works.
 
## Non-Standard C/C++ Libraries:

* #include <time.h> : Used to initialize seed of srand to current time
* #include <unistd.h> : Used to implement sleep and usleep functions in the game if you are using linux  operating system
* #include <windows.h> : if you are using this program on windows because it is required for sleep function. However, this game won't work on windows as some other changes had to be made for it to be compaitable in windows.

_____________________________________________________________________________________________________________________________________________________________________

# In A Nutshell:

Our game begins by greeting the user followed by taking in user data.I.e. Name of the user. This data will be entered into a file using input and output streams. 

The introduction gives a detailed explanation of the game. The user can choose to skip it if he/she wants to.

Once the game begins, the user is prompted to answer questions from topics that the user has selected. These questions are generated randomly from structures that store these questions.

The game includes a healing mechanism called *'The Lucky-Dice'*.

The game at some part will incorporate different features like the typewriter effect.

After each round the data is updated in the file. 

In the end of the game, the report card of the user is shown with feedbacks and goodbye message is displayed. 

______________________________________________________________________________________________________________________________________________________________________
