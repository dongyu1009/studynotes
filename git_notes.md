# Brief Introduction to Git

Git is the most popular and advanced Distributed Version Control Systems(DRCS)

Centralized Version Control system such as CVS and SVN etc. has some
shortcomings like slow-speed and network-based. Once the server was down, the
hole system conld not be working.

Git was developed by Linus in two weeks using C language, and supported well
in open-source societies. 

Github provices the free git server to users all around the world.

Git could only manage the plain files which as document, source code , web
pages and etc. As for videos, pictures, the Git could do nothing for them.

Warning to windows user:
    DO NOT use the notepad in windows to create and edit files, because file
created by notepad could generate the BOM information in the head of it.For
alternative, please use notepad++ or vim.

# Set up the Git system

For Linux: 
    sudo apt-get install git
    sudo yum install git

    ./configuration and make and sudo make install

For MacOS:
    integrated by Xcode.

For Windows:
    Just setup by default configuration and use the Git Bash

To set the global configuration:
    
    git config --global user.name "<myname>"
    git config --global user.email "<email>"
    git config --global color.ui true   # colorful git echo

Common alias:
    git config --global alias.st status
    git config --global alias.co checkout
    git config --global alias.ci commit
    git config --global alias.br branch
    git config --global alias.last 'log -1'
    git config --global alias.unstage 'reset HEAD'
    git config --global alias.lg "log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit"

The config files:
    Repository: .git/config
    Global:     ~/.gitconfig
    

# Basic commands in a local repository

To Create a empty Git Repository by using the following command to create repository:
    git init

The repository was managed by a directory named .git which is invisible in
Linux.


To add/remove file to the stage a Git Repository
    git add <filename1> [filename2] ...
    git add -f <filename1> [filename2] ...  # force add (you could not add files which is contained by .gitignore)
    git rm <filename1> [filename2] ...  # before this command, you need delete the file from the working directory first.

To Commit the Changes
    git commit -m "<massage>"

To see the status.
    git status

To the diff of the files:
    git diff

To see the logs
    git log [--pretty=oneline] [--abbrev-commit]

Back to version
    git reset --hard HEAD^      # back to the last
    git reset --hard HEAD^^     # back to the last of the last
    git reset --hard HEAD~100   # back to 100 times age
    git reset --hard 234532     # the first numbers in log of the specified
version, the last parameter means the commit id

To the command logs when going back and going future
    git reflog

To revoke the modified file from the stage
    git checkout -- <filename>

# To set-up the remote repository

## To connect the remote repository

Firstly, check whether there is a directory named .ssh in your home directory.
If not, create it and generate ssh-key by the following command:
    ssh-keygen -t rsa -C "<email>"

Secondly, add the text in ~/.shh/id_rsa.pub to your git-hub account.

## To submit a local repository

(1) create a empty repository in the github.

(2) connect the remote repository
    git remote add origin git@github.com:<username>/<projectname>.git

(3) push files to the remote at the first time:
    git push -u origin master

(4) push files to the remote 
    git push origin master
    git push origin dev

## To Create a repository in a github

(1) create a empty repository in the github.
    in addition, you could generate files like README.md and .gitignore with creation.
    for .gitignore model, you may want to see http://github.com/github/gitignore

you conld check the ignore file by:
    git check-ignore -v <filename>
    

(2) Clone the repository to local mechine
    git clone git@github.com:<username>/<projectname>.git       # using git protocol
    git clone http://github.com/<username>/<projectname>.git    # using https protocol

To see the remote the information of the git server:
    git remote [-v] # [-v] means more details

You could use "Fork" and "Pull requst" on the Github webside.

# Basic Commands for branch management

To see the branches:
    git branch

To create a branch:
    git checkout -b dev

this command contains 2 commands:
    git branch dev
    git checkout dev

To switch branch:
    git checkout master

To merge branchs:
    git merge [--no--ff] -m "<desc>" dev

if you are using "fast forward" without "--no--ff" command, you will never
found the branch information after you merged.

To delete branchs:
    git branch -d <branchname>
    git branch -D <branchname> # to force delete a branch which is never be merged.

To solve the conflict:
    After you use the merge command, you could see the diff in the conflict
files. What you need to do is to edit the files to solve the conflict by hand
and commit.


# Branch Management 

The main server has the release version named "master".

The main server has the developing version named "dev".

everyone has the developing version named by his name.

# Solve the issues by stash command

If you wanna do something else very badly, and you are doing a job right now
which can not drop. you could use stash to save hide the temperal workspace
and do the others. After that, you will let it back in every minute by using
stash.

To save the workspace:
    git stash

To see the stash list:
    git stash list

To back to  the last stash and delete it:
    git stash pop

To back to the lash stash
    git stash apply

To back to the specific stash
    git stash apply stash@{0} 


# collaboration

To fetch not-master branch from the server:
    git checkout -b dev origin/dev


To solve the conflict when push to server:

(1) pull the newest version to the local:
    git pull

    if you are not connect the local branch and the server branch, you may
want to connect first:
    git branch --set-upstream dev origin/dev

    or you could pull like this:
    git pull orign/dev dev

(2) solve the conflict manually and push:
    git commit -m "<desc>"
    git push orgin dev

# Using Tags

To make a tag to a commit:
    git tag v1.0
    git tag -a v1.0 -m "<desc>"
    git tag -s v1.0     # -s means sign which can not forge. you need GnuPG firstly.

To make a tag to a history version:
    git tag v0.9 <commit_id> 

To the tag names:
    git tag

To show the tag information:
    git show v0.9

To submit to server with a tag:
    git push origin v1.0
    git push origin --tags  # push all the commits with tags.

To delete a tag:
    git tag -d v1.0

To delete a tag on a server(you need delete the local tag firstly):
    git push origin :refs/tags/v0.9


# To set a git server

(1) setup git
    sudo apt-get install git
    sudo yum install git

(2) create a git account to run the git service
    sudo adduser git

(3) collect the pub-key to the /home/git/.ssh/authorized_keys
    one line for one user

(4) init a repository:
    to the directory "/srv" and run:
    sudo git init --bare sample.git
    sudo chown -R git:git sample.git

(5) forbid the shell login
    edit the /etc/passwd
    change the line:
        git:x:1001:1001:,,,:/home/git:/bin/bash
    to:
        git:x:1001:1001:,,,:/home/git:/usr/bin/git-shell

(6) clone the remote repository:
    git clone git@server:/srv/sample.git


# Back to the commit on Github

> git reset --hard HEAD <commit_id>

> git push origin HEAD --force

