FROM  alpine as builder

LABEL autodelete="true"
LABEL project="basic"

RUN apk update \
	&& apk add build-base

WORKDIR /hello-cpp
COPY * /hello-cpp/

RUN make

FROM alpine

RUN apk update \
	&& apk add libstdc++

COPY --from=builder /hello-cpp/main /

ENTRYPOINT ["./main"]
