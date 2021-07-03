FROM ubuntu
LABEL maintainer="lavlinsky"

COPY . /qwe
WORKDIR /qwe

RUN apt-get update
RUN apt-get -y install g++


RUN qmake -makefile -o Makefile "Lavlinksy" myProgram.pro
RUN g++ -o main main.cpp triangle.h triangle.cpp
CMD ["./qwe/myProgram.pro"]




