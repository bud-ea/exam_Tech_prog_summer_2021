FROM ubuntu:latest
LABEL maintainer="201_351_Zvyagin"

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update
RUN apt-get install g++ -y

RUN mkdir ~/Exam_proj_QtLess/MyProj
RUN cp -R ~/Exam_proj_QtLess ~/Exam_proj_QtLess/MyProj
RUN cd MyProj
ADD MyProj .

RUN g++ -o main main.cpp circle.h circle.cpp square.h square.cpp triangle.h triangle.cpp
CMD ["./main", "201_351_Zvyagin"]