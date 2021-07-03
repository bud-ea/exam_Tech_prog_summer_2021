FROM ubuntu

LABEL author="Kulev Egor"
LABEL group="201-331"

RUN echo "This image made as an exam task by Kulev Egor"

RUN apt update -y && apt upgrade -y \
    && apt install -y build-essential g++

COPY Exam_proj_QtLess/app /app/source

WORKDIR /app/source
RUN g++ *.cpp -o ../program

WORKDIR /app

ENTRYPOINT [ "/app/program" ]