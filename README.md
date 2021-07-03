## Экзаменационная работа
Выполнил: Кулёв Е.В.  
Учебная группа: 201-331

### Используемые команды git
* Клонирование `git clone https://github.com/bud-ea/exam_Tech_prog_summer_2021.git`
* Создание текущей ветки `git checkout -b 201-331_kulev`
* Добавление изменений в ветку `git add .`
* Фиксация изменений `git commit -m "Информация о коммите"`
* Пуш в удаленный репозиторий `git push`

### Тегирование
* `git tag exam_res_201-331_kulev`
* `git push origin exam_res_201-331_kulev`

### Слияние с `master`
* `git fetch origin master`
* `git merge master`

При возникновении конфликтов разрешить любым удобным способом и выполнить `git commit`