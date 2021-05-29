#creating an make file so that it is easy to compile and run the code

FLAGS = g++ -pedantic-errors -std=c++11

functions.o: functions.cpp functions.h
	$(FLAGS) -c functions.cpp

barrier.o: barrier.cpp barrier.h functions.h
	$(FLAGS) -c barrier.cpp

func2.o: func2.cpp func2.h functions.h
	$(FLAGS) -c func2.cpp

play_main.o: play_main.cpp func2.h functions.h barrier.h
	$(FLAGS) -c play_main.cpp

game: play_main.o functions.o func2.o barrier.o
	$(FLAGS) play_main.o functions.o func2.o barrier.o -o game

clean:
	rm -rf game play_main.o func2.o barrier.o functions.o

.PHONY: clean

