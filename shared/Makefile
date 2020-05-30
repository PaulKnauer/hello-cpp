CXX=g++

main: libshared.so main.o
	$(CXX) -o main  main.o -L. -lshared

libshared.so: shared.cpp
	$(CXX) -fPIC -c shared.cpp -o shared.o
	$(CXX) -shared -o libshared.so shared.o

clean:
	rm *.o *.so main

run: main
	export LD_LIBRARY_PATH=. \
		&& ./main

docker-build:
	docker build -t shared .

docker-run: docker-build
	docker run --name shared -t shared

docker-clean:
	docker rm -f shared
	docker rmi -f shared
	./autodelete-dangling.sh
