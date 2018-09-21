all: q1 q2

q1: questionOne.exe
	./questionOne

questionOne.exe: questionOne.cpp
	g++ questionOne.cpp -o questionOne

q2: questionTwo.exe
	./questionTwo

questionTwo.exe: questionTwo.cpp
	g++ questionTwo.cpp -o questionTwo

clean:
	rm -f questionTwo
	rm -f questionOne
