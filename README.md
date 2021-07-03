git clone https://github.com/bud-ea/exam_Tech_prog_summer_2021.git
git init
git remote add exam_Tech_prog_summer_2021 https://github.com/bud-ea/exam_Tech_prog_summer_2021.git
git checkout -b 201-351_Miloradov
git add README.md
git commit -m "Добавление readme"
git push
git add -all
git commit -m "exam res"

git checkout 201-351_Miloradov
git merge master
git branch -d master //используется только в своём репозитории, не используется для экзамена
