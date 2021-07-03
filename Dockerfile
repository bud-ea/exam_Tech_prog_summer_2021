FROM ubuntu:latest
LABEL maintainer="Zmiev_201-352"

RUN apt update

RUN apt -y install g++
COPY Exam_proj_QtLess /MyProj
WORKDIR /MyProj
RUN g++ -o main main.cpp
CMD ["./main", "Zmiev_201-352"]