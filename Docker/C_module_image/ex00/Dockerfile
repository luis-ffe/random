
FROM alpine:latest
RUN apk add --no-cache g++ make
WORKDIR /ex00
COPY . .
WORKDIR /ex00
RUN make VERBOSE=1
RUN chmod +x tester.sh
CMD ["./tester.sh"]
