#!/bin/bash

a=1
b=2

val=`expr $a + $b`
echo $val

val=`expr $a / $b`
echo $val

val=`expr $a % $b`
echo $val

if [ $a == $b ] # == equals -eq != equals -ne
then
    echo "equal"
fi

if test $a != $b 
then
    echo "not equal"
else            # you could also use elif
    echo "equal"
fi


if [ $a != $b ] # there must be space besies variables, left and right
then            # "then" must be in a one line
echo "not equal"
fi

if [ 1 == 1 ]; then echo "one line"; fi

if [ $a -lt $b ] # -lt -le -gt -ge
then
    echo "a < b"
fi

if [ $a -lt $b -o $a -gt -100 ] # ! -o -a
then
    echo "$a -lt $b -o $a -gt -100"
fi

# -o equals ||
# -a equals &&

aNum=3
case $aNum in
    1)  echo '你选择了 1'
    ;;
    2)  echo '你选择了 2'
    ;;
    3)  echo '你选择了 3'
    ;;
    4)  echo '你选择了 4'
    ;;
    *)  echo '你没有输入 1 到 4 之间的数字'
    ;;
esac

for i in 1 2 3 4 5; do
    printf "%d\n" $i
done

# ine line
for file in `ls /etc`; do echo $file; done

int=6
while(( $int>0 )); do
    echo $int
    let "int--"
done

echo '按下 <CTRL-D> 退出'
echo -n '输入你最喜欢的网站名: '
while read FILM
do
    echo "是的！$FILM 是一个好网站"
done

# loop forever : 
#       while :
#       while true
#       while (( ; ; ))

until [ ! $a -lt 10 ]
do
    echo $a
    a=`expr $a + 1`
done

# you cound use break and continue 
