CFLAGS = -c -pedantic -Wall
CMP = g++
OBJ = obj/main.o obj/benchmark.o obj/operacja.o

../program: $(OBJ)
	$(CMP) $^ -o $@

obj/main.o: src/main.cpp
	$(CMP) $(CFLAGS) $< -o $@

obj/benchmark.o: src/benchmark.cpp inc/benchmark.h
	$(CMP) $(CFLAGS) $< -o $@

obj/operacja.o: src/operacja.cpp inc/operacja.h
	$(CMP) $(CFLAGS) $< -o $@
clean:
	rm -f obj/*.o
