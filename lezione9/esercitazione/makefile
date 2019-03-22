LIBS:=`root-config --libs`
INCS:=`root-config --cflags`

exe: main.cpp EquazioniDifferenziali.o VettoreLineare.o Vettore.o
	g++ -o $@ $^ ${INCS} ${LIBS}
%.o: %.cpp
	g++ -c $^ ${INCS}

