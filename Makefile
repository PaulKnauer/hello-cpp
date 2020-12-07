.PHONY: all
all:
	cd basic && make -e
	cd getenv && make -e
	cd shared && make -e
	cd static && make -e

.PHONY: clean
clean:
	cd basic && make -e clean
	cd getenv && make -e clean
	cd shared && make -e clean
	cd static && make -e clean

.PHONY: docker-build
docker-build:
	cd basic && make -e docker-build
	cd getenv && make -e docker-build
	cd shared && make -e docker-build
	cd static && make -e docker-build

.PHONY: docker-run
docker-run:
	cd basic && make -e docker-run
	cd getenv && make -e docker-run
	cd shared && make -e docker-run
	cd static && make -e docker-run

.PHONY: docker-clean
docker-clean:
	cd basic && make -e docker-clean
	cd getenv && make -e docker-clean
	cd shared && make -e docker-clean
	cd static && make -e docker-clean