#!/bin/bash

DIR27=~/.local/27tester
EXEC27=~/.local/bin/27tester


# Clone the repository into ~/.local/27tester (hopefully outside of $PATH)
mkdir -p $DIR27
cd $DIR27
git init
git remote add origin https://github.com/maloryware/27tester
git branch --set-upstream-to=origin/main main
git pull origin main

# Setup the '27tester' shell script, within path (~/.local/bin/27tester)
touch $EXEC27
curl https://codeberg.org/maloryware/27tester/raw/branch/main/setup/27tester > $EXEC27