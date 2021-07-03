  
FROM ubuntu:latest
LABEL maintainer="Grebennikov_201-352"

RUN apt update

RUN apt -y install g++
COPY Exam_proj_QtLess /MyProj
WORKDIR /MyProj
RUN g++ -o myProgram main.cpp
CMD ["./main", "Grebennikov_201-352"]