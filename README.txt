работа до слияния
git clone https://github.com/bud-ea/exam_Tech_prog_summer_2021.git
git checkout -b 201-351_Nikolaev
git add --all
git commit -a
git push --set-upstream origin 201-351_Nikolaev
git add --all
git commit -a
git push

слияние веток
git checkout master
git pull
git checkout 201-351_Nikolaev
git merge master
<вручную исправляем >
git push

добавление тэга
git tag nikolaev_exam_res HEAD
git push origin nikolaev_exam_res 