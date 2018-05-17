#!/bin/bash
{
    this is a comment 
}
name="dongyu"   # no space besides the +
echo $name

name=3
readonly name   # make the variable readonly
echo ${name}
unset name      # delete variable

for skill in Ada Coffe Java Action; do
    echo "I like ${skill}Script"    # use ${} in the ""
    echo 'I like ${skill}Script'    # could not use variable in ''
    echo $skill
done

# =========== string ================

# joint
str1="dong"
str2="yu"
myname=$str1$str2
echo $myname "!"

# length
echo ${#myname}

# split
echo ${myname:0:4}

# find substring : find "is" in "he is a man"
str1="he is a man"
echo `expr index "$str1" is`

# judge if it is null
# [ $str ]      if not null, return true
# [ -z $str ]   if null, return true
# [ -n $str ]   if not null, return 0

# judge if two strings are equal
# = 
# !=

# =========== array ================

arr=(1 2 4 5)
arr2=(
"i"
"am"
"dong"
"yu"
)

$arr[1] = 100

echo ${arr[@]}

length=${#arr2[@]}
echo $length

