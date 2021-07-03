FROM ubuntu
LABEL maintainer="Alicia_Zadnepryanskaya"
RUN apt update
RUN apt install qt5-qmake -y
RUN apt install cmake -y
RUN apt-get install qt5-default -y
RUN apt install build-essential -y
COPY . /home
WORKDIR /home/Exam_proj_QtLess
RUN qmake Exam_proj_QtLess.pro
RUN make
RUN make install
CMD ["./Exam_proj_QtLess"]