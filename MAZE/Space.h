//
//  Space.h
//  Assignment-3
//
//

#ifndef Space_h
#define Space_h
#include <cstdlib>
#include <vector>
using namespace std;
class Space
{
public:
    Space();
    Space(char type, int row, int col);
    int getRow();
    int getCol();
    bool getVisited();
    bool isIntersection();
    void setIsIntersection(bool j);
    void setVisited(bool visited);
    void setExit(char character);
    char getExit();
    void setRowAndCol(int row, int col);
    char getType();
    void setType(char type);
    void setParent(int row, int col);
    int getParentRow();
    int getParentCol();
private:
    char type;
    int row;
    int col;
    bool visited;
    bool intersection;
    int parentRow;
    int parentCol;
};

#endif /* Space_hpp */

