FROM ubuntu

LABEL author="Skrypnik"
LABEL group="201-331"

RUN echo "This image of Vasily Skrypnik for exam."

RUN apt update -y && apt upgrade -y \
&& apt install -y build-essential g++

COPY Exam_proj_QtLess /app/source

WORKDIR /app/source
RUN g++ *.cpp -o ../program

WORKDIR /app

ENTRYPOINT [ "/app/program" ]
