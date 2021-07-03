FROM ubuntu:latest
LABEL maintainer="Rahmatullaev_201-352"

RUN apt update

RUN apt -y install g++
COPY Exam_proj_QtLess /
RUN g++ -o main main.cpp
CMD ["./main", "Rahmatullaev_201-352"]