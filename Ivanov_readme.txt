git clone https://github.com/melancholy314/exam_Tech_prog_summer_2021.git
git branch 201_331_Ivanov
git checkout master
переход на ветку master
git commit -m 
git merge 201_331_Ivanov 
Слияние веток master с 201_331_Ivanov
git status
git tag -a -m
git push -u origin master 



команды для Docker

FROM ubuntu

RUN apt-get update
RUN apt-get install -y g++

COPY Exam_proj_QtLess ./MyProject

WORKDIR MyProject

RUN g++ -o MyProgram main.cpp circle.h circle.cpp square.h square.cpp triangle.h triangle.cpp

CMD ["./MyProgram", "2", "201_331_Ivanov"]

