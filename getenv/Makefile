CXX=g++
EXEC=main
OBJ=main.o
LDFLAGS=
LDLIBS=
DOCKER_CONTAINER_NAME=getenv
DOCKER_IMAGE_NAME=paulknauer/getenv

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) -o $@ $< $(LDFLAGS) $(LDLIBS)

.cpp.o:
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

run: all
	./$(EXEC)

docker-build:
	docker build -t $(DOCKER_IMAGE_NAME) .

docker-run: docker-build
	docker run --name $(DOCKER_CONTAINER_NAME) -t $(DOCKER_IMAGE_NAME)

docker-clean:
	docker rm -f $(DOCKER_CONTAINER_NAME); \
		docker rmi -f $(DOCKER_IMAGE_NAME); \
		cd ../scripts && ./autodelete-dangling.sh getenv
