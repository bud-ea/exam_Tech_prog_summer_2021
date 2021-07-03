git clone https://github.com/bud-ea/exam_Tech_prog_summer_2021.git
git checkout -b 201-331_Logacheva
touch readme.md
git add readme.md
git commit -m "Version 1"
git checkout master # переход в ветку master
git merge 201-331_Logacheva -m "Слияние" # влить в ветку, в которой находимся, данные из ветки 201-331_Logacheva
git commit -m "Version 1"