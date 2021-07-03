git clone https://github.com/melancholy314/exam_Tech_prog_summer_2021.git
скопировать репозиторий
git branch 201_331_Ivanov (git branch- список веток)
создание ветки
git checkout master (если 201_331_Ivanov соответсвтенно переключение на нее)
переход на ветку master
"Создаем текстовый файл "
git add .
индексирование всех файлов в папке для последующего коммита
git commit -m
коммитим(фиксируем индексированные файлы в коммите) 
git merge 201_331_Ivanov 
Слияние веток master с 201_331_Ivanov
git status статус репозитория
git tag -a -m 'B создать тег с описанием на активном коммите
 git push -u origin master 
пушим в удаленный репозиторий ветку master


команды для Docker

FROM ubuntu

RUN apt-get update
RUN apt-get install -y g++

COPY Exam_proj_QtLess ./MyProject

WORKDIR MyProject

RUN g++ -o MyProgram main.cpp circle.h circle.cpp square.h square.cpp triangle.h triangle.cpp

CMD ["./MyProgram", "2", "201_331_Ivanov"]

