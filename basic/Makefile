CXX=g++
CXXFLAGS?=-std=c++17 -Wall -Wextra -Wpedantic -O2

OBJS=hello.o main.o
EXEC=main
DOCKER_CONTAINER_NAME=hello
DOCKER_IMAGE_NAME=paulknauer/hello

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(EXEC)
	./$<

docker-build:
	docker build -t $(DOCKER_IMAGE_NAME) .

docker-run: docker-build
	docker run --name $(DOCKER_CONTAINER_NAME) -t $(DOCKER_IMAGE_NAME)

docker-clean: clean
	docker rm -f $(DOCKER_CONTAINER_NAME); \
		docker rmi -f $(DOCKER_IMAGE_NAME); \
		cd ../scripts && ./autodelete-dangling.sh basic

clean:
	rm -f $(OBJS) $(EXEC)	
