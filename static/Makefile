CXX=g++
AR=ar

OBJS=main.o
EXEC=main
LDFLAGS=-L.
LDLIBS=-lstatic
LIB=libstatic.a
LIBOBJ=static.o
DOCKER_CONTAINER_NAME=static
DOCKER_IMAGE_NAME=paulknauer/static

all: $(LIB) $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS) $(LDLIBS)

$(LIB): $(LIBOBJ)
	$(AR) rvs $@ $<

.cpp.o:
	$(CXX) -c $< -o $@

run: $(LIB) $(EXEC)
	./$(EXEC)

docker-build:
	docker build -t $(DOCKER_IMAGE_NAME) .

docker-run: docker-build
	docker run --name $(DOCKER_CONTAINER_NAME) -t $(DOCKER_IMAGE_NAME)

docker-clean: clean
	docker rm -f $(DOCKER_CONTAINER_NAME); \
		docker rmi -f $(DOCKER_IMAGE_NAME); \
		./autodelete-dangling.sh

clean:
	rm -f $(LIBOBJ) $(OBJS) $(LIB) $(EXEC)	
