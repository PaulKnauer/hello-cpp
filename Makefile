CXX=g++

OBJS=hello.o main.o

all: main

main: $(OBJS)
	$(CXX) -o main $(OBJS) 

%.o: %.cpp
	$(CXX) -c $<

asm: hello.s main.s
	cat hello.s
	cat main.s

%.s: %.cpp
	$(CXX) -S $<

run: main
	./main

docker-build:
	docker build -t hello .

docker-run: docker-build
	docker run --name hello -it hello

docker-clean: clean
	docker rm -f hello
	docker rmi -f hello

clean:
	rm -f *.o *.s main
