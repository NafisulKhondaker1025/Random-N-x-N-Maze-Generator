//Nafisul Khondaker
//This file contains the details of each function in the "room" class

#include "room.hpp"

room::room() { //initializes a room with status 0(unvisited) and all walls closed
	status = 0;
	up = closed;
	down = closed;
	right = closed;
	left = closed;
}

wall room::get_wall(std::string x) { //returns the current status of any one of the four walls (open/closed)
	if ((x == "up")) {
		return up;
	}
	else if ((x == "down")) {
		return down;
	}
	else if ((x == "right")) {
		return right;
	}
	else if ((x == "left")) {
		return left;
	}
}

void room::change_wall(std::string x) { //changes the status of any one of the four walls
	if ((x == "up")) {
		switch(up) {
		case open:
			up = closed;
			break;
		case closed:
			up = open;
			break;
		}
	}
	else if ((x == "down")) {
		switch (down) {
		case open:
			down = closed;
			break;
		case closed:
			down = open;
			break;
		}
	}
	else if ((x == "right")) {
		switch (right) {
		case open:
			right = closed;
			break;
		case closed:
			right = open;
			break;
		}
	}
	else if ((x == "left")) {
		switch (left) {
		case open:
			left = closed;
			break;
		case closed:
			left = open;
			break;
		}
	}
}

int room::get_status(void) { //returns the status of the room (visited/unvisited)
	return status;
}

void room::change_status(void) { //changes the status of a room
	switch (status) {
	case 0:
		status = 1;
		break;
	case 1:
		status = 0;
		break;
	}
}

void room::set_index(int x, int y) { //sets row and column number
	r = x;
	c = y;
}

int room::get_r() { //returns row number
	return r;
}

int room::get_c() { //returns column number
	return c;
}
