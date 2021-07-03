Docker https://hub.docker.com/repository/docker/xacor/exam

git clone https://github.com/bud-ea/exam_Tech_prog_summer_2021.git

cd exam_Tech_prog_summer_2021/

git branch 201-351_Riabov

git checkout 201-351_Riabov

git add -A

git commit

git push --set-upstream origin 201-351_Riabov

git checkout master

git pull

git checkout 201-351_Riabov

git merge master

git add -A

git commit

git tag Riabov_exam_res HEAD

git push origin Riabov_exam_res
