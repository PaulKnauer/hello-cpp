CXX=g++

OBJS=hello.o main.o
EXEC=main
DOCKER_CONTAINER_NAME=hello
DOCKER_IMAGE_NAME=paulknauer/hello

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) -o $@ $(OBJS) 

.cpp.o:
	$(CXX) -c $< -o $@

run: $(EXEC)
	./$<

docker-build:
	docker build -t $(DOCKER_IMAGE_NAME) .

docker-run: docker-build
	docker run --name $(DOCKER_CONTAINER_NAME) -t $(DOCKER_IMAGE_NAME)

docker-clean: clean
	docker rm -f $(DOCKER_CONTAINER_NAME)
	docker rmi -f $(DOCKER_IMAGE_NAME)

clean:
	rm -f $(OBJS) $(EXEC)	
