# Random-N-x-N-Maze-Generator
This code can generate any N x N square maze as well as traverse through the maze to find the quickest solution. It uses C++ and Graph theory.

Code Information:
This is a program which generates a random maze in any N x N square grid. To generate the grid, I used a square board full of rooms. Each of these rooms had four walls (above, below, to the right and to the left). I have a room class to define each room and a maze class to define the maze. I also have a Graph class which can hold a graph of any data type. The maze class is derived from the graph class so that I can use the functions of the Graph class to create a graph and use it in my maze class to generate the maze.
To generate the maze, I used a graph to move through the grid. Each vertex of the graph represents a room and its adjacency list contained all rooms it was connected to. I started from a particular room and each time, I checked to find the neighboring rooms, selected a random neighboring room and moved on. When I moved from one room to another, I removed the walls between the two rooms to create a path. This was repeated until all rooms were visited. If I reached a dead end, I simply backtracked by removing that vertex from the graph and going back to the previous room. I then selected a different neighbor and moved forward.

![alt text](https://github.com/NafisulKhondaker1025/Random-N-x-N-Maze-Generator/blob/main/img/Picture1.jpg)
![alt text](https://github.com/NafisulKhondaker1025/Random-N-x-N-Maze-Generator/blob/main/img/Picture4.png)

Here is a screenshot of the output when run on Visual Studio with a 5 x 5 grid:

![alt text](https://github.com/NafisulKhondaker1025/Random-N-x-N-Maze-Generator/blob/main/img/Picture2.png)

It is difficult to notice the path. I traced it out so that it can be viewed more easily:

![alt text](https://github.com/NafisulKhondaker1025/Random-N-x-N-Maze-Generator/blob/main/img/Picture3.png)

I used a vector to hold the entire graph as all the modifying functions such as push_back were already included in the library. I also used another vector to hold the adjacency list. It can also be implemented using a linked list or an array. For this purpose, a vector was sufficient, but I would definitely use a separate list class for other more complicated problems as then I would be able to include more functions to modify my graph however I wanted.
