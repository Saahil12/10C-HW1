# HW1


## Goal:
To familiarize myself with a version control software, git, while implementing a single player version card game, *siete y medio*


## Summary:
This code implements three classes: **Hand**, **Player**, and **Card** to implement *siete y medio*. The goal of this game is to get cards whose total value comes closest to 7.5 without going over it, aka busting.
-The **Card** class is responsible for assigning random rank & suits to each individual card as well as comparing which cards are greater than eachother.
-The **Hand** class is responsible for giving the player a new card when asked for and keeping track of all the cards in the current hand.
-The **Player** class keeps track of the amount of money a player has.

## Layout:
The following code consits of three files: **cards.h**, **cards.cpp**, and **siete-y-medio.cpp**. 
-**cards.h** : header file consisiting of the 3 class declerations.
-**cards.cpp** : file consisiting of all header function definitions
-**siete-y-medio.cpp** : source file where main routine lives and plays *siete y medio*.
