CFLAGS = -c -pedantic -Wall
CMP = g++
OBJ = obj/main.o

program: $(OBJ)
	$(CMP) $^ -o $@
obj/main.o: src/main.cpp
	$(CMP) $(CFLAGS) $< -o $@

