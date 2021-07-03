git clone https://github.com/bud-ea/exam_Tech_prog_summer_2021.git
git checkout -b 201-352_Zhenin
git push --set-upstream origin 201-352_Zhenin
git status 
git add .
git commit -m "first commit"
git push

git checkout master
git merge 201-352_Zhenin
git push 