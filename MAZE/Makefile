a.out: MazeApp.cpp Maze.o Space.o
	g++ -std=c++11 MazeApp.cpp Maze.o Space.o
Maze.o: Maze.cpp Maze.h
	g++ -std=c++11 -c Maze.cpp
Space.o: Space.cpp Space.h
	g++ -std=c++11 -c Space.cpp
clean:
	rm a.out *.o
