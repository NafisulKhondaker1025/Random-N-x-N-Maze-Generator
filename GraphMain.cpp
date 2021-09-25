//Nafisul Khondaker
/*This file contains the main function. When run, the console will display a prompt to enter the dimensions of the grid to be used.
If the grid is not displayed currectly try to increase the size of the console window and/or change the font.*/

#include "maze.hpp"
#include "room.hpp"
#include <iostream>
#include <time.h>

int main(void) {

	srand((int)time(0));
	int* dim = new int;
	std::cout << "This program will generate a random maze and display it on the screen.\n";
	std::cout << "Please enter dimesion of the grid you wish to use.\nFor example enter 5 to get a 5 x 5 grid: ";
	std::cin >> *dim; //scan in user input for dimensions

	while (*dim <= 1) { //keep asking user until valid input is provided
		std::cout << "Please provide a valid input: ";
		std::cin >> *dim;
	}

	Graph<room, int> mygraph;

	 maze MyMaze(*dim); //variable while holds the grid
	 std::cout << "\nBlank grid with closed rooms:\n\n";
	 MyMaze.print_maze(); //print out a blank grid before calling the maze generating function
	 std::cout << "\n\nRandomly generated maze:\n\n";
	 MyMaze.generate_maze(); //generate the maze
	 MyMaze.print_maze(); //print out the generated maze

	return 0;
}
