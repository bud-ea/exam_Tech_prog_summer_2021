FROM ubuntu

LABEL author="Skrypnik"
LABEL group="201-331"

RUN echo "This image of Vasily Skrypnik for exam."

RUN apt update -y && apt upgrade -y \
&& apt install gсс -y

COPY Exam_proj_QtLess /

WORKDIR /
RUN g++ *.cpp -o ../myProgram

WORKDIR /app

ENTRYPOINT [ "/myProgram" ]
ы