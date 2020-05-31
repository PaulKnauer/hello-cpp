FROM  alpine as builder

LABEL autodelete="true"

RUN apk update \
	&& apk add build-base

WORKDIR /hello-cpp
COPY * /hello-cpp/

RUN make

FROM alpine

RUN apk update \
	&& apk add libstdc++

COPY --from=builder /hello-cpp/libshared.so /
COPY --from=builder /hello-cpp/main /

ENV LD_LIBRARY_PATH=.

ENTRYPOINT ["./main"]
