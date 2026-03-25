CXXFLAGS += -Wall -Wextra -Weffc++ -std=c++14
pe-vector-tests: main.o
	g++ -o $@ $^

clean:
	rm pe-vector-tests main.o
