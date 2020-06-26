CXX=g++
EXEC=main
OBJ=main.o
LIB=libshared.so
LIBOBJ=shared.o
LDFLAGS=-L.
LDLIBS=-lshared
DOCKER_CONTAINER_NAME=shared
DOCKER_IMAGE_NAME=paulknauer/shared

all: $(LIB) $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) -o $@ $< $(LDFLAGS) $(LDLIBS)

.cpp.o:
	$(CXX) -c $< -o $@

$(LIB): $(LIBOBJ)
	$(CXX) -shared -o $@ $<

$(LIBOBJ): shared.cpp
	$(CXX) -fPIC -c $< -o $@

clean:
	rm -f $(OBJ) $(LIBOBJ) $(LIB) $(EXEC)

run: all
	export LD_LIBRARY_PATH=. \
		&& ./$(EXEC)

docker-build:
	docker build -t $(DOCKER_IMAGE_NAME) .

docker-run: docker-build
	docker run --name $(DOCKER_CONTAINER_NAME) -t $(DOCKER_IMAGE_NAME)

docker-clean:
	docker rm -f $(DOCKER_CONTAINER_NAME); \
		docker rmi -f $(DOCKER_IMAGE_NAME); \
		./autodelete-dangling.sh
