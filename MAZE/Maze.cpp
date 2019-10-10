#ifndef MAZECPP
#define MAZECPP
#include "Maze.h"
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <fstream>
#include "Space.h"
#include <iostream>
using namespace std;

Maze::Maze() {
		Space grid[100][100];
		int rows, cols;
		int sRow, sCol; 
		int currentR, currentC;
		stack <Space> freeNeighborsStack;
		stack <Space> solutionStack;
		queue <Space> freeNeighborsQueue;
		queue <Space> solutionQueue;
}

Maze::Maze(string filename, int initialR, int initialC) {
	ifstream file(filename);
    if (!file.is_open()) {
		exit(1);
	}
	string fLine;
	getline(file, fLine);
	int index;
	index = fLine.find(' ');
	string temp1 = fLine.substr(0, index);
	int sizeRow = stoi(temp1);
	fLine.erase(fLine.begin(), fLine.begin() + index + 2);

	int sizeCol = stoi(temp1);
	rows = sizeRow;
	cols = sizeCol;
    grid[rows][cols];
    grid[1][0].setRowAndCol(initialR,initialC);
    grid[1][0].setType('E');
	string temp;

		while (!file.eof()) {
			getline(file, temp);
	        index = temp.find(' ');
            string temp1 = temp.substr(0, index);
	        int nextRow = stoi(temp1);
	        temp.erase(temp.begin(), temp.begin() + index + 1);
	        int nextCol = stoi(temp);
		    grid[nextRow][nextCol].setRowAndCol(nextRow, nextCol);
			grid[nextRow][nextCol].setType('*');
                
			}
        for(int i = 0; i<rows;i++){
		if(grid[i][cols-1].getType() == ' '){
                grid[i][cols-1].setType('X');
                }
        }
                
}

	
    
void Maze::printMaze() {
   
    for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << grid[i][j].getType();
		}
        cout << endl;
    }
    
}

Space Maze::getSpace(int r, int c) {
	return grid[r][c];
}

bool Maze::setInitial(int r,int c){
    grid[1][0].setRowAndCol(r,c);
    return true;
}

stack<Space> Maze::getSolutionStack(){
    return solutionStack;
}

bool Maze::findExitStack(Space currentSpace){
//do backtracking if you dont have any neighbors not visited
}

stack<Space> Maze::getFreeNeighborsStack(Space currentSpace){
    //check for visited and if space is open
    return freeNeighborsStack;
}

queue<Space> Maze::getFreeNeighborsQueue(Space currentSpace){
// 
    return freeNeighborsQueue;
}
bool Maze::findExitQueue(Space currentSpace){
//do back tracking if you dont have any neighbors not visited

}

queue<Space> Maze::getSolutionQueue(){
    return solutionQueue;
}

void Maze::print(){

}







#endif 
