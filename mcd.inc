#!/bin/bash
# Copyright (c) 2019, Stein Gunnar Bakkeby
# Shorthand function for creating a directory and cd into it afterwards

mcd () {
    if [ $# = 0 ]; then
        echo "Usage: mcd <directory>"
        return
    fi
    mkdir -p "$1" && cd "$1"
}