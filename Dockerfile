FROM ubuntu
LABEL maintainer="Rahmatullaev_Renat"
RUN apt update
RUN apt install qt5-qmake -y
RUN apt install cmake -y
RUN apt-get install qt5-default -y
RUN apt install build-essential -y
COPY . /
RUN qmake Exam_proj_QtLess.pro
RUN make
RUN make install
CMD ["./Exam_proj_QtLess"]