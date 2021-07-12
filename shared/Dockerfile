FROM  alpine as builder

LABEL autodelete="true"
LABEL project="shared"

RUN apk update \
	&& apk add build-base

WORKDIR /hello-cpp
COPY Makefile /hello-cpp/
COPY *.h /hello-cpp/
COPY *.cpp /hello-cpp/

RUN make

FROM alpine

RUN apk update \
	&& apk add libstdc++

COPY --from=builder /hello-cpp/libshared.so /
COPY --from=builder /hello-cpp/main /

ENV LD_LIBRARY_PATH=.

ENTRYPOINT ["./main"]
