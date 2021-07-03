FROM Ubuntu
COPY . /MyProj
WORKDIR /MyProj 

RUN apt-get update
RUN apt-get install qt5-default -y
RUN apt-get install build-essential
RUN apt-get -y install qtcreator
RUN apt-get install qtbase5 -y
RUN apt-get install qt5-qmake
RUN qmake -makefile -o Makefile "Igumnova" main.exe
CMD ["./main.exe"]