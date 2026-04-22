for ext in $(ls leetcode/* | cut -d \. -f 3 | sort | uniq); do echo ${ext}: $(ls leetcode/*.${ext} | wc -l); done
