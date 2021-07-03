git clone https://github.com/Ekgardt-Victor/exam_Tech_prog_summer_2021.git
	скопировать репозиторий
git branch 201_331_Ekgardt (git branch- список веток)
	создание ветки
git checkout master(если 201_331_Ekgardt соответсвтенно переключение на неё)
	переход на ветку master
	"Создаем текстовый файл "
git add .
	индексирование всех файлов в папке для последующего коммита
git commit -m
	коммитим(фиксируем индексированные файлы в коммите) 
git merge 201_331_Ekgardt

	Слияние веток master с 201_331_Ekgardt
git status статус репозитория
git tag -a -m 'B создать тег с описанием на активном коммите
git push -u origin master 
пушим в удаленный репозиторий ветку master
Это основные команды, если вы не делали ошибок то всякие отмены не пригодятся
