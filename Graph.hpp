#ifndef GRAPH_H
#define GRAPH_H

//Nafisul Khondaker

/*This the base graph class which can be used to store a vertex of a graph of any type. It has two template
parameters, T1 is the data type of the graph, T2 is another type which can be used to find 
the neighbouring vertices of a particular vertex. I use the word "neighbours" to represent all vertices
that are connected to a particular vertex via different edges

The Graph class has a protected variable "Vertex" which holds the data of any vertex and a vector of
type Graph which holds an adjacency list of all the neighbours

NOTE: Notice there is no contructor/destructor. I tried to define one but it kept giving me an invalid external symbol error. 
I don't understand why but it seems to work without one and I tried it on Visual Studio and repl.it.

I also did not include anything in the functions in this file as I would override the functions in the maze class to use in my code*/



#include <vector>
#include <stdlib.h>

template <class T1, class T2> //T1 is the data type of the graph, T2 is another type which can be used to find the neighbouring vertices of a particular vertex such as int to store index of array. This function can be overridden and/or overloaded to serve a specific problem.
class Graph {
public:
	virtual void connect_vertex(T1*, T1*) { return; } // this function is used to connect two vertices with an edge.

	virtual std::vector<Graph<T1, T2>> find_neighbours(T2, T2) { //this function can be used to find and create an adjacency list of all the neighbours of a vertex. This function can be overridden and/or overloaded to serve a specific problem.
		return neighbours;
	}

	T1 get_vertex() { //returns the data of a vertex
		return Vertex;
	}

	void set_vertex(T1 x) { //sets the data of a vertex
		Vertex = x;
	}

	void set_neighbours(std::vector<Graph<T1, T2>> x) { //sets the adjacency list of neighbours of a vertex
		neighbours = x;
	}
 
	std::vector<Graph<T1, T2>> get_neighbours() { //returns the adjacency list of neighbours of a vertex
		return neighbours;
	}

protected:
	std::vector<Graph<T1, T2>> neighbours; //adjacency list
	T1 Vertex; // data of a particular vertex
};

#endif
