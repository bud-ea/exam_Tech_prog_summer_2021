FROM ubuntu:latest

LABEL maintainer="grrinya2002@gmail.com"

RUN apt-get -y update && apt-get install -y

RUN apt-get -y install gcc

COPY . /MyProj

WORKDIR ./MyProj

FROM gcc:latest



RUN g++ -o myProgram main.cpp

CMD ["./myProgram"]
