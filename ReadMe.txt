git command
Cлияние с master
cd D:\exam_Demyanova
git clone https://github.com/bud-ea/exam_Tech_prog_summer_2021.git
git checkout -b 201-331_Demyanova
touch readme.md
git add readme.md
git commit -m "Название commit"
git checkout master # переход в ветку master
git merge 201-331_Demyanova -m "Слияние" # влить в ветку, в которой находимся, данные из ветки 201-331_Demyanova
git commit -m "Название commit"