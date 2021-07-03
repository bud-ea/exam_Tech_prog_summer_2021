FROM ubuntu
LABEL maintainer="201-351_khoroshev"

RUN apt-get update
RUN apt-get -y install g++
ADD Exam_proj_QtLess .

RUN g++ -o main main.cpp triangle.h triangle.cpp

CMD ["./main", "Khoroshev"]