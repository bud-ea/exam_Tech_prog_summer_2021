From ubuntu:18.04

COPY . /qwe
WORKDIR /qwe

RUN apt-get update
RUN apt-get install qt5-default -y
RUN apt-get -y install qtcreator
RUN apt-get install qt5-qmake
RUN apt-get install build-essential -y
RUN qmake -makefile -o  myProgram.pro
FROM ubuntu:18.04
ENV TZ=Europe/Kiev
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone
RUN apt update && apt install -y python-pip python-dev ssh python-boto3
RUN pip  install ansible==2.4.3.0
CMD ["./myProgram.pro"]
