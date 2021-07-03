From ubuntu

COPY . /qwe
WORKDIR /qwe

RUN apt-get update
RUN apt-get install qt5-default -y
RUN apt-get -y install qtcreator
RUN apt-get install qtbase5 -y
RUN apt-get install qt5-qmake
RUN apt-get install build-essential -y
RUN qmake -makefile -o Makefile "Lavlinksy" myProgram.pro
CMD ["./qwe/myProgram.pro"]