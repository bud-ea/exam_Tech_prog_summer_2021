
```git init``` — создание репозитория в текущей директории (не использовалось, использовался git clone)

``` git clone https://github.com/bud-ea/exam_Tech_prog_summer_2021``` — клонирование репозитория

```git branch 201-331_Skrypnik``` — создание ветки
___
#### Переключение веток

```git checkout 201-331_Skrypnik``` 

```git checkout master```
___

```git branch``` — список веток и отображение текущей

```git add --all``` — индексирование новых, измененных, удаленных файлов

```git commit -m "сообщение коммита"``` — фиксация в коммите файлов добавленных командой git add

``` git merge 201-331_Skrypnik``` — слияние активной ветки с указанной

``` git status``` - статус репозитория

```git tag -a -m 'Message' v1.0 master ``` — создать тег с сообщением на активном коммите ветки master

```git push -u origin master ``` — пушим в удаленный репозиторий ветку master

