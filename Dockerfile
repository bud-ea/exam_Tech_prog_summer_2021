FROM ubuntu

LABEL author="Moshnikova Victoria"        
#автор 

LABEL group="201-331"                     
#группа автора

RUN echo "This image made as an exam task by Moshnikova Victoria"
#вывод соо

RUN apt update
RUN apt install qt5-qmake -y
RUN apt install cmake -y
RUN apt-get install qt5-default -y
RUN apt install build-essential -y

COPY . /home

WORKDIR /home/exam_Tech_prog_summer_2021

RUN qmake Exam_proj_QtLess.pro
RUN make
RUN make install

RUN ["./Exam_proj_QtLess"]

