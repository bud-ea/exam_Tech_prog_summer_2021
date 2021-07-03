git init — создание репозитория в текущей директории (не использовалось, использовался git clone)

git clone https://github.com/bud-ea/exam_Tech_prog_summer_2021 — клонирование репозитория

git branch 201_331_Kucher — создаем ветку

Переключение веток 

git checkout 201_331_Kucher

git checkout master

git branch — отображение текущей ветки и список всех

git merge 201_331_Kucher — слияние активной ветки с указанной веткой

git commit -m "сообщение коммита" — фиксация в коммите файлов добавленных командой git add

git status - это статус репозитория

git tag -a -m 'Message' v1.0 master — создать тег с сообщением на активном коммите ветки master

git push -u origin master — пушим в удал. репозиторий ветку master 

git add —all — индексирование новых, измененных, удаленных файлов