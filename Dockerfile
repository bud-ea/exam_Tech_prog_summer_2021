FROM ubuntu
LABEL maintainer="201-351_letov"

RUN apt-get update
RUN apt-get -y install g++
ADD Exam_proj_QtLess .

RUN g++ -o main main.cpp square.h square.cpp

CMD ["./main", "LETOV"]