FROM ubuntu
LABEL maintainer="lavlinsky"

COPY . /qwe
WORKDIR /qwe

RUN apt-get update
RUN apt-get install qt5-default -y
RUN apt-get -y install qtcreator
RUN apt-get install qtbase5 -y
RUN apt-get install qt5-qmake
RUN apt-get install build-essential -y
RUN apt-get update
RUN apt-get -y install g++
ADD Exam_proj_QtLess .

RUN qmake -makefile -o Makefile "Lavlinksy" myProgram.pro
RUN g++ -o main main.cpp triangle.h triangle.cpp
CMD ["./qwe/myProgram.pro"]





