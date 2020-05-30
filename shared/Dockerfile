FROM ubuntu:18.04 as builder

LABEL autodelete="true"

RUN apt -y update \
	&& apt install -y build-essential

WORKDIR /gitlab-shared-cpp
COPY * /gitlab-shared-cpp/

RUN make

FROM ubuntu:18.04

COPY --from=builder /gitlab-shared-cpp/libshared.so /
COPY --from=builder /gitlab-shared-cpp/main /

ENV LD_LIBRARY_PATH=.

ENTRYPOINT ["./main"]

