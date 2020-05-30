FROM  alpine as builder

LABEL autodelete="true"

RUN apk update \
	&& apk add build-base

WORKDIR /gitlab-hello-cpp
COPY * /gitlab-hello-cpp/

RUN make

FROM alpine

RUN apk update \
	&& apk add libstdc++

COPY --from=builder /gitlab-hello-cpp/main /

ENTRYPOINT ["./main"]
