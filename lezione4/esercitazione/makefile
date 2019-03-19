LIBS := `root-config --libs`
INCS := `root-config --cflags`

comp: main.cpp comune.h funct.h
	g++ -o exe.x main.cpp comune.cpp funct.cpp ${INCS} ${LIBS}