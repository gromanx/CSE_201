Number: NumberMain.o Number.o
	g++ -o Number NumberMain.o Number.o

NumberMain.o: NumberMain.cpp Number.h
	g++ -c NumberMain.cpp

Number.o: Number.cpp Number.h
	g++ -c Number.cpp

clean:
	rm *.o Number
