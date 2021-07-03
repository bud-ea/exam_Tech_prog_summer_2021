FROM ubuntu:latest
LABEL maintainer="Panin_201_351"

RUN apt update
RUN apt -y install g++

ADD Exam_proj_QtLess .

RUN g++ -o myProgram main.cpp square.cpp triangle.cpp circle.cpp
CMD ["./myProgram", "Panin_201_351"]