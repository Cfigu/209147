../generuj: generator.o
	g++ $^ -o $@
	rm generator.o
generator.o: generator.cpp
	g++ -c -pedantic -Wall $< -o $@
clean:
	rm -f ./*.o
