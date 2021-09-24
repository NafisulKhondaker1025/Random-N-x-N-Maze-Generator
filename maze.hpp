#ifndef MAZE_H
#define MAZE_H

//Nafisul Khondaker

/*This the maze class which holds an N x N grid of rooms which form the maze. It inherits
from the base Graph class, so that it can store a vector of type Graph. This vector is the actual graph
itself which holds different rooms as vertices and each vertex has an adjacency list of rooms which it
is connected to. The maze class also hold a variable called "maze" which holds the N x N grid so that it can be printed
on the console*/

#include "room.hpp"
#include<vector>
#include <string>
#include "Graph.hpp"

class maze : public Graph<room, int> {
public:
	maze(unsigned int); //default constructor which takes the dimensions of the grid as input to initialize maze with no paths. No paths means that all the rooms have closed walls so they are not connected

	~maze(); //destructor;

	int check_all_rooms(void); //This function checks whether all the rooms have been visited

	std::vector<Graph<room, int>> find_neighbours(int, int) override; //this function is inherited from the base graph Graph class and has been overridden to find all the rooms that one particular room is connected to

	void connect_vertex(room*, room*) override; //this function is inherited from the base graph Graph class and has been overridden to connect two rooms together (Form an edge)

	void generate_maze(); //This is the function which generates a random maze using the graph

	void print_maze(); //This function prints the generated maze;

	unsigned int get_dim(); //returns the dimentions of the maze

private:
	std::vector<std::vector<room>> Maze; //N x N grid of rooms stored in the form of a two dimensional vector
	std::vector<Graph<room, int>> graph; //graph of rooms used to generate a random maze
	unsigned int dim; //dimensions of the grid
};

#endif