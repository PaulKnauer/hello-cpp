FROM ubuntu:18.04 as builder

LABEL autodelete="true"

RUN apt -y update \
	&& apt install -y build-essential

WORKDIR /gitlab-static-cpp
COPY * /gitlab-static-cpp/

RUN make

FROM ubuntu:18.04

COPY --from=builder /gitlab-static-cpp/main /

ENTRYPOINT ["./main"]

