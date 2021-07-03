FROM ubuntu:latest

LABEL maintainer-"201-352_Shchipunov"

RUN apt-get -y update

RUN apt-get -y install gcc

COPY . /MyProj

WORKDIR /MyProj

FROM gcc:latest

RUN g++ Exam_proj_QtLess.pro

CMD [./MyProj]