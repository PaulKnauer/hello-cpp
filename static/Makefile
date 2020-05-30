CXX=g++
AR=ar

main: libstatic.a main.o
	$(CXX) -o main  main.o -L. -lstatic

libstatic.a: static.cpp
	$(CXX) -c static.cpp -o static.o
	$(AR) rvs libstatic.a static.o

clean:
	rm *.o *.a main

run: main
	./main
