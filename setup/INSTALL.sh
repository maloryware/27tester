#!/bin/bash

$DIR27 = ~/.local/27tester
$EXEC27 = ~/.local/bin/27tester


# Clone the repository into ~/.local/27tester (hopefully outside of $PATH)
mkdir -p $DIR27
cd $DIR27
@git init
@git remote add origin https://github.com/maloryware/27tester
@git pull

# Setup the '27tester' shell script, within path (~/.local/bin/27tester)
