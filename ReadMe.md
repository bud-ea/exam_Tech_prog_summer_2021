Команды git:
git clone https://github.com/Samsonov-aleksey/exam_Tech_prog_summer_2021.git
скопировать репозиторий
git branch 201-331_Egel (git branch- список веток)
создание ветки
git checkout master(если 201-331_Egel соответсвтенно переключение на нее)
переход на ветку master
"Создаем текстовый файл "
git add .
индексирование всех файлов в папке для последующего коммита
git commit -m
коммитим(фиксируем индексированные файлы в коммите) 
git merge 201-331_Egel 
Слияние веток master с 201-331_Egel
git status статус репозитория
git tag -a -m 'B создать тег с описанием на активном коммите
 git push -u origin master 
пушим в удаленный репозиторий ветку master
Это основные команды, если вы не делали ошибок то всякие отмены не пригодятся

Команды Docker:
docker ps — смотрим список запущенных контейнеров 
docker pull — загрузка образа 
docker build — собирает образ 
docker logs — смотрим логи 
docker run — запускаем контейнер 
docker stop — останавливает контейнер 
docker kill — «убивает» контейнер