FROM ubuntu
COPY . ./MyProj 
workdir ./MyProj 

RUN apt update 
CMD ["echo", "Кропалева Е.М 201-331"]
RUN apt install -y build-essential 
run g++ main.cpp -o main

CMD ["./main"]
