git init — создание репозитория в текущей директории (не использовалось, использовался git clone)

git clone https://github.com/bud-ea/exam_Tech_prog_summer_2021 — клонирование репозитория

git branch 201_331_Moshnikova — создаем ветку

Переключение веток 
git checkout 201_331_Moshnikova
git checkout master

Слияние веток master с 201_331_Moshnikova
git status               -   статус репозитория
git tag -a -m 'B         - создать тег с описанием на активном коммите
git push -u origin master  - пушим в удаленный репозиторий ветку master

Остальное

git branch — отображение текущей ветки и список всех

git merge 201_331_Moshnikova — слияние активной ветки с указанной веткой

git commit -m "сообщение коммита" — фиксация в коммите файлов добавленных командой git add

git add —all — индексирование новых, измененных, удаленных файлов