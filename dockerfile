FROM ubuntu

RUN apt-get update
RUN apt-get install -y g++

COPY Exam_proj_QtLess ./MyProj

WORKDIR MyProj

RUN g++ -o MyProgram main.cpp circle.h circle.cpp square.h square.cpp triangle.h triangle.cpp

CMD ["./MyProgram", "2", "Sannikov_201-331"]