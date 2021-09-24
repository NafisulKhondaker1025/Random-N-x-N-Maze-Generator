#ifndef ROOM_H
#define ROOM_H

//Nafisul Khondaker

/*This is the header file which stores the functionalities for each room of the maze.
It has private variables to figure out whether the walls of the room are open or closed 
and whether the room has been visited and the location of the room in an N x N grid of rooms. 
Each room has four walls*/


#include <cstddef>
#include <string>

enum wall {open, closed}; //enumeration to hold current status of wall


class room {
public:
	room(void); //default constructor
	wall get_wall(std::string); //this function returns the current status of a particular wall
	void change_wall(std::string); //this function is used to change the statues of a particular wall from open to closed or vice versa
	int get_status(); //this returns the current status of the room itself. 0 means the room hasn't been visited and 1 means the room has been visited.
	void change_status(); //this changes the status of the room
	void set_index(int, int); //this sets the row and column number of the room in an N x N grid of rooms 
	int get_r(); //this returns the row number of the room
	int get_c(); //this returns the column number of the room

private:
	int status, r, c; //status: 0 means unvisited, 1 means visited. || r -> row number || c -> column number
	wall up; //each room has four walls
	wall down;
	wall left;
	wall right;
};

#endif 
