#!/bin/bash

cd ~/
#goto ~

### install brew ###
mkdir homebrew && curl -L https://github.com/Homebrew/brew/tarball/master | tar xz --strip 1 -C homebrew
echo "export PATH \$HOME /homebrew/bin:\$PATH" >> .zshrc
#export PATH=$HOME/homebrew/bin:$PATH #if you have zshrc, add this command
###################

#export MAIL=yourmail@student.42seoul.kr
brew install bat 
echo "export BAT_THEME=\"1337\"" >> .zshrc

echo "set number\nsyntax on" > .vimrc

source ~/.zshrc
source ~/.vimrc
