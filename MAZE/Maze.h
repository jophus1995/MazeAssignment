//
//  Maze.h
//  Assignment-3
//
//

#ifndef Maze_h
#define Maze_h

#include <vector>
#include <string>
#include <stack>
#include <queue>
#include "Space.h"
using namespace std;
class Maze
{
	public:
		Maze();
		Maze(string filename, int initialR, int initialC);
		bool setInitial(int r, int c);
		Space getSpace(int r, int c);
		stack<Space> getFreeNeighborsStack(Space currentSpace);
		bool findExitStack(Space currentSpace);
		stack<Space> getSolutionStack();
		queue<Space> getFreeNeighborsQueue(Space currentSpace);
		bool findExitQueue(Space currentSpace);
		queue<Space> getSolutionQueue();
		void printMaze();

	private:
		void print();
		Space grid[100][100];
		int rows, cols; //how many rows and columns is the maze you read in
		int sRow, sCol; //Start Row and Start Column
		int currentR, currentC;
		stack <Space> freeNeighborsStack;
		stack <Space> solutionStack;
		queue <Space> freeNeighborsQueue;
		queue <Space> solutionQueue;
};
#endif /* Maze_h */
