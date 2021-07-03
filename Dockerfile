FROM ubuntu:latest
LABEL maintainer="Riabov_201-351"

RUN apt update
RUN apt -y install g++

ADD Exam_proj_QtLess .

RUN g++ -o myProgram main.cpp square.cpp triangle.cpp circle.cpp
CMD ["./myProgram", "Riabov_201-351"]