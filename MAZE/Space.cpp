#ifndef SPACECPP
#define SPACECPP
#include "Space.h"
#include <iostream>
#include <vector>
using namespace std;

Space::Space() {
	 type = ' ';
     row = 0;
	 col = 0;
	 visited = true;
	 intersection = true;
	 parentRow = 0;
	 parentCol = 0;
}

Space::Space(char newType, int newRow, int newCol){
	type = newType;
	row = newRow;
	col = newCol;
}

int Space::getRow() {
	return row;
}

int Space::getCol() {
	return col;
}

bool Space::getVisited() {
	return visited;
}

bool Space::isIntersection() {
	return intersection;
}

void Space::setIsIntersection(bool j) {
	intersection = j;
}

void Space::setVisited(bool newVisited) {
	visited = newVisited;
}

void Space::setExit(char character) {
	type = character;
}
char Space::getExit() {
	if (type == 'X')
		return type;
}

void Space::setRowAndCol(int nRow, int nCol) {
	row = nRow;
	col = nCol;
}

char Space::getType() {
	return type;
}

void Space::setType(char nType) {
	type = nType;
}

void Space::setParent(int nRow, int nCol) {
  parentRow = nRow;
  parentCol = nCol;
}

int Space::getParentRow() {
	return parentRow;
}

int Space::getParentCol() {
	return parentCol;
}

#endif
