FILENAME:=  $(patsubst %.cpp,%.o,$(wildcard *.cpp))

all:$(FILENAME)

%.o : %.cpp
	g++  $< -o $@;

clean:
	rm -rf *.o
